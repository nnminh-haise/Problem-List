#ifndef OUTPUT_CPP
#define OUTPUT_CPP

#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

bool generateOutput(int test_number, ifstream& cin, ofstream& cout) {
    cerr << "==> " << __func__ << "(" << test_number << ")";

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int val;
        cin >> val;
        if (val % 7 == 0 && val % 13 == 0) {
            cout << "both\n";
        }
        else if (val % 7 == 0) {
            cout << "mod 7\n";
        }
        else if (val % 13 == 0) {
            cout << "mod 13\n";
        }
        else {
            cout << "none\n";
        }
    }
    return true;
}

#endif