#ifndef CREATE_TESTCASES
#define CREATE_TESTCASES

#include <bits/stdc++.h>
#include "libraries/GeneratingMethods.h"
#include "libraries/SideFunctions.h"

using namespace std;

void makeInput(const int testNumber, ofstream& cout) {
    int n = randInt(ClosedSet(1, 3000));

    if (testNumber <= 10) {
        n = randInt(ClosedSet(1, 100));
    }

    cout << n << endl;

    return;
}


bool check(int x) {
    if (x == 1) {
        return false;
    }

    int counter = 0;
    int p = 2;
    while (x > 1) {
        bool divided = false;
        while (x % p == 0) {
            if (x % p == 0) {
                divided = true;
            }
            x /= p;
        }
        if (divided) {
            ++counter;
        }
        ++p;
    }
    return (counter == 2);
}

void makeOutput(ifstream& cin, ofstream& cout) {
    int n, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        if (check(i)) {
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