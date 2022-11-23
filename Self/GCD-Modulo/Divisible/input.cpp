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
    cout << n << endl;
    for (int i = 1; i <= n; ++i) {
        int flag = randInt(1, 4);
        if (flag == 1) {
            cout << 7 * randInt(1, 1000 / 7) << space(1, n);
        }
        else if (flag == 2) {
            cout << 13 * randInt(1, 1000 / 13) << space(1, n);
        }
        else if (flag == 3) {
            cout << 13 * 7 * randInt(1, 1000 / 7 / 13) << space(1, n);
        }
        else {
            cout << randInt(1, 1000) << space(1, n);
        }
    }

    return true;
}

#endif