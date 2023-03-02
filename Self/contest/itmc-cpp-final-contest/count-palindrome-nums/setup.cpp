#ifndef CREATE_TESTCASES
#define CREATE_TESTCASES

#include <bits/stdc++.h>
#include "libraries/GeneratingMethods.h"
#include "libraries/SideFunctions.h"

using namespace std;

void makeInput(const int testNumber, ofstream& cout) {
	ClosedSet N = ClosedSet(1, 10000);
    ClosedSet V = ClosedSet(1, 100000);

    if (testNumber <= 10) {
        N = ClosedSet(1, 20);
        V = ClosedSet(1, 100);
    }

    int n = randInt(N);
    cout << n << endl;
    vector < int > a(n);
    for (int i = 0; i < n; ++i) {
        a[i] = randInt(V);
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << endl;
    }


    return;
}

bool isPalin(string s) {
    int n = s.length() - 1;
    for (int i = 0; i < n; ++i) {
        if (s[i] != s[n - i]) {
            return false;
        }
    }

    return true;
}

void makeOutput(ifstream& cin, ofstream& cout) {
    int n;
    cin >> n;
    string* a = new string [n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int counter = 0;
    for (int i = 0; i < n; ++i) {
        if (isPalin(a[i]) == true) {
            ++counter;
        }
    }
    cout << counter << endl;

    return;
}

// ! User can modify this function in order to test your code before you begin to create the testcase.
// ! Otherwise please comment the main() function out! The function below may cause function "redefinition" error!

// int main(int agrc, char **agrv) {
//     int test_number = 5;

//     ofstream testcase_input_data_ostream("test.in");
//     ofstream testcase_output_data_ostream("test.out");
//     ifstream testcase_input_date_istream("test.in");

//     makeInput(test_number, testcase_input_data_ostream);
//     makeOutput(testcase_input_date_istream, testcase_output_data_ostream);

//     testcase_input_data_ostream.close();
//     testcase_output_data_ostream.close();
//     testcase_input_date_istream.close();

//     return 0;
// }

#endif
