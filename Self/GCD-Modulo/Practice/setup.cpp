#ifndef CREATE_TESTCASES
#define CREATE_TESTCASES

#include <bits/stdc++.h>
#include "libraries/GeneratingMethods.h"
#include "libraries/SideFunctions.h"

using namespace std;

void makeInput(const int testNumber, ofstream& cout) {
    int queries = randInt(ClosedSet(1, 10));

    cout << queries << endl;

    while (queries--) {
        ClosedSet nn = ClosedSet(1, 1000000);
        ClosedSet kk = ClosedSet(1, 1000000);
        ClosedSet aa = ClosedSet(1, 1000);
        ClosedSet bb = ClosedSet(1, 1000);
        
        if (testNumber > 20) {
            nn = ClosedSet(100000000000000000, 1000000000000000000);
            kk = ClosedSet(100000000000000000, 1000000000000000000);
            aa = ClosedSet(100000, 1000000000);
            bb = ClosedSet(100000, 1000000000);
        }
        if (randInt(ClosedSet(0, 1))) {
            cout << randLLInt(nn) << " " << randLLInt(aa) << " " << randLLInt(bb) << " " << randLLInt(kk) << endl;
        }
        else {
            unsigned long long a = randLLInt(aa);
            unsigned long long b = randLLInt(bb);
            unsigned long long n = randLLInt(nn);
            int i = 1;
            while (a * i <= n && b * i <= n) {
                ++i;
            }
            cout << n << " " << a << " " << b << " " << randLLInt(ClosedSet(1, i / 2)) << endl;
        }
    }

    return;
}

unsigned long long queries = 0, n = 0, k = 0, ans = 0, a = 0, b = 0;

unsigned long long gcd(unsigned long long a, unsigned long long b) {
    return b ? gcd(b, a % b) : a;
}

unsigned long long lcm(unsigned long long a, unsigned long long b) {
    return a / gcd(a, b) * b;
}

void makeOutput(ifstream& cin, ofstream& cout) {
    cin >> queries;
	
	while (queries--) {
        cin >> n >> a >> b >> k;
        ans = 0;
        
        ans = floor(n / a) + floor(n / b) - 2 * floor(n / lcm(a, b));

        if (ans >= k) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
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