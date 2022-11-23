#ifndef OUTPUT_CPP
#define OUTPUT_CPP

#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

bool generateOutput(int test_number, ifstream& cin, ofstream& cout) {
    cerr << "==> " << __func__ << "(" << test_number << ")";

    int n;
    long long ans = 0;
    cin >> n;
    int* a = new int [n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if ((a[i] + a[j] + a[k]) % 5 == 0) {
                    ++ans;
                }
            }
        }
    }

    cout << ans << endl;

    delete[] a;

    return true;
}

#endif