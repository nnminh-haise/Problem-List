#ifndef OUTPUT_CPP
#define OUTPUT_CPP

#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

bool generateOutput(int test_number, ifstream& cin, ofstream& cout) {
    cerr << "==> " << __func__ << "(" << test_number << ")";

    int n, k;
    cin >> n >> k;
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        int val;
        cin >> val;
        sum += val;
    }
    cout << sum % k << endl;

    return true;
}

#endif