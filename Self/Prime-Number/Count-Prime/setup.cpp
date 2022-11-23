#ifndef CREATE_TESTCASES
#define CREATE_TESTCASES

#include <bits/stdc++.h>
#include "libraries/GeneratingMethods.h"
#include "libraries/SideFunctions.h"

using namespace std;

void makeInput(const int testNumber, ofstream& cout) {
    long long n = randInt(ClosedSet(1, 5000000));

    if (testNumber <= 10) {
        n = randInt(ClosedSet(1, 1000));
    }

    cout << n << endl;

    return;
}

int countPrimes(int n) {
    bool *primality = new bool [n];
    for (int p = 2; p < n; ++p) {
        primality[p] = true;
    }

    int counter = 0;
    for (int p = 2; p < n; ++p) {
        if (primality[p] == true && (long long)p * p < n) {
            for (int i = p * p; i < n; i += p) {
                primality[i] = false;
            }
        }
        if (primality[p]) ++counter;
    }

    delete[] primality;

    return counter;
}

void makeOutput(ifstream& cin, ofstream& cout) {
    long long n;
    cin >> n;
    cout << countPrimes(n) << endl;

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