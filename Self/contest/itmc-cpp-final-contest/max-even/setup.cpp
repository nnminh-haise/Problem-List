#ifndef CREATE_TESTCASES
#define CREATE_TESTCASES

#include <bits/stdc++.h>
#include "libraries/GeneratingMethods.h"
#include "libraries/SideFunctions.h"

using namespace std;

void makeInput(const int testNumber, ofstream& cout) {
	ClosedSet N = ClosedSet(1000, 100000);
    ClosedSet V = ClosedSet(10000, 1000000000);

    if (testNumber <= 10) {
        N = ClosedSet(1, 10);
        V = ClosedSet(10, 100);
    }  

    int n = randInt(N);
    cout << n << endl;
    vector < int > a = randList(n, V);

    for (int i = 0; i < n; ++i) {
        cout << a[i] << (i < n - 1 ? " " : "");
    }
    cout << endl;

    return;
}


void makeOutput(ifstream& cin, ofstream& cout) {
    int n;
    cin >> n;
    int* a = new int [n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int odds[2] = {-10, -10};
    int evens[2] = {-10, -10};
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 1) {
            odds[0] = max(odds[0], a[i]);
        }
    }

    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 1 && a[i] != odds[0]) {
            odds[1] = max(odds[1], a[i]);
        }
    }

    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0) {
            evens[0] = max(evens[0], a[i]);
        }
    }

    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0 && a[i] != evens[0]) {
            evens[1] = max(evens[1], a[i]);
        }
    }

    int ans = -1;
    if (odds[0] != -10 && odds[1] != -10) {
        ans = max(ans, odds[0] + odds[1]);
    }
    if (evens[0] != -10 && evens[1] != -10) {
        ans = max(ans, evens[0] + evens[1]);
    }
    cout << ans << endl;
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
