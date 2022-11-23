#ifndef CREATE_TESTCASES
#define CREATE_TESTCASES

#include <bits/stdc++.h>
#include "libraries/GeneratingMethods.h"
#include "libraries/SideFunctions.h"

using namespace std;

void makeInput(const int testNumber, ofstream& cout) {
    ClosedSet length_range(5, 20);

    if (testNumber > 10)
        length_range = ClosedSet(1000, 200000);

    int n = randInt(length_range);

    cout << n << endl;
    vector < int > f(n + 1, 0);
    vector < int > a;

    while ((int)a.size() < n - 1) {
        int value = randInt(ClosedSet(1, n));
        if (f[value] == 0) {
            a.push_back(value);
            f[value] = 1;
        }
    }

    for (int i = 0; i < (int)a.size(); ++i)
        cout << a[i] << (i < (int)a.size() ? " " : "");
    cout << endl;

    return;
}

void makeOutput(ifstream& cin, ofstream& cout) {
    int n;
    cin >> n;
    vector < int > a(n - 1);
    for (int &item: a)
        cin >> item;

    vector < int > f(n + 1, 0);
    for (int item: a)
        ++f[item];

    for (int i = 1; i <= n; ++i)
        if (f[i] == 0) {
            cout << i << endl;
            return;
        }

    cout << -1 << endl;

    return;
}

// ! User can modify this function in order to test your code before you begin to create the testcase.
// ! Otherwise please comment the main() function out! The function below may cause function "redefinition" error!

// int main(int agrc, char **agrv) {
//     srand(time(NULL));

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