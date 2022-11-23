#ifndef CREATE_TESTCASES
#define CREATE_TESTCASES

#include <bits/stdc++.h>
#include "libraries/GeneratingMethods.h"
#include "libraries/SideFunctions.h"

using namespace std;

void makeInput(const int testNumber, ofstream& cout) {
    unsigned int n = randInt(ClosedSet(1, 100000));

    if (testNumber <= 10) {
        n = randInt(ClosedSet(1, 100));
    }

    cout << n << endl;

    return;
}

unsigned int sieve(unsigned int n) {
    const unsigned int N = 1e6 + 7;
    unsigned int *primality = new unsigned int [N];
    
    for (int p = 2; p <= N; ++p) {
        primality[p] = true;
    }

    primality[0] = primality[1] = 0;
    for (unsigned int p = 2; p <= N; ++p) {
        if (primality[p] == true && (unsigned long long)p * p <= N) {
            for (int i = p * p; i <= N; i += p) {
                primality[i] = false;
            }
        }
    }

    for (unsigned int p = 2; p <= N; ++p) {
        if (primality[p] && p >= n) {
            return p;
        }
    }
    return -1;
}

void makeOutput(ifstream& cin, ofstream& cout) {
    unsigned int n;
    cin >> n;
    cout << sieve(n) << endl;

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