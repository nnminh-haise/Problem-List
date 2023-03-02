#ifndef CREATE_TESTCASES
#define CREATE_TESTCASES

#include <bits/stdc++.h>
#include "libraries/GeneratingMethods.h"
#include "libraries/SideFunctions.h"

using namespace std;

void makeInput(const int testNumber, ofstream& cout) {
	ClosedSet N = ClosedSet(1000, 100000);
    if (testNumber <= 10) {
        N = ClosedSet(1, 500);
    }  

    int n = randInt(N);
    cout << n << endl;

    return;
}

int count(int val) {
    int counter = 0;

    while (val > 0) {
        ++counter;
        val /= 10;
    }

    return counter;
}

void makeOutput(ifstream& cin, ofstream& cout) {
    int n, ans = 0;
    cin >> n;
    for (int num = 1; num <= n; ++num) {
        int digit = count(num);
        if (digit % 2 == 1) {
            ++ans;
        }
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
