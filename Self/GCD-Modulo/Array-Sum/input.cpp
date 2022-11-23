#ifndef INPUT_CPP
#define INPUT_CPP

#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include "libraries/randomize.h"

#define space(i, n) (i < n ? " " : "\n")

using namespace std;

bool generateInput(int test_number, ofstream& cout) {
    cerr << "==> " << __func__ << "(" << test_number << ")";

    int n = randInt(1, 1000);
    int k = randInt(1, 1000);

    cout << n << " " << k << endl;
    for (int i = 1; i <= n; ++i) {
        cout << randInt(1, 1000) << space(i, n);
    }

    return true;
}

#endif