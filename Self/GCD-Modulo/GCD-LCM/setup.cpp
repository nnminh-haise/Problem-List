#ifndef CREATE_TESTCASES
#define CREATE_TESTCASES

#include <bits/stdc++.h>
#include "libraries/GeneratingMethods.h"
#include "libraries/SideFunctions.h"

using namespace std;

void makeInput(const int testNumber, ofstream& cout) {
    int queries = randInt(ClosedSet(1, 1000));
    cout << queries << endl;

    while (queries--) {
        int a = randInt(ClosedSet(1, 1000000));
        int b = randInt(ClosedSet(1, 1000000));
        cout << a << " " << b << endl;
    }

    return;
}

long long gcd(long long a, long long b) {
    return (b ? gcd(b, a % b) : a);
}

long long lcm(long long a, long long b) {
    return a * b / gcd(a, b);
}

void makeOutput(ifstream& cin, ofstream& cout) {
    int queries;
	cin >> queries;
	while (queries--) {
        long long a, b;
        cin >> a >> b;
        cout << gcd(a, b) << " " << lcm(a, b) << endl;
	}

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