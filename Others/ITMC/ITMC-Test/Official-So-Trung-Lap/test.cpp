#include <iostream>
#include <vector>
#include <stdio.h>
#include <cstdlib>
#include <set>
#include "libraries/set.h"

typedef unsigned long long ULL;

using namespace std;

const int INF = 1e9 + 7;

int randInt(int a, int b) {
    return rand() % (b - a + 1) + a;
}

vector < int > randList(int list_size, int min_value, int max_value, bool is_distinct = true) {
    vector < int > res;
    if (is_distinct == true && list_size == max_value - min_value + 1) {
        vector < int > values;
        for (int i = min_value; i <= max_value; ++i) {
            values.push_back(i);
        }

        Set a = Set(values);

        for (int i = 0; i < list_size; ++i) {
            int val = a.rnd();
            a.pop(val);

            res.push_back(val);
        }
    }
    else if (is_distinct == false) {
        for (int i = 0; i < list_size; ++i) {
            res.push_back(randInt(min_value, max_value));
        }
    }
    return res;
}

void print(vector < int >& a) {
    for (int i = 0; i < (int)a.size(); ++i) {
        cout << a[i] << (i < (int)a.size() - 1 ? " " : "");
    }
    return;
}

void sub0() {
    cerr << __func__ << endl;
    int max_n = 20;
    int n = randInt(5, max_n);
    cout << n << "\n";
    vector < int > a = randList(n, 1, n);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << randInt(1, n) << "\n";
    return;
}

void sub1() {
    cerr << __func__ << endl;
    int max_n = 1000;
    int max_val = 1000;
    int n = randInt(10, max_n);
    cout << n << "\n";
    vector < int > a = randList(n, 1, n);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << randInt(1, n) << "\n";
    return;
}

void sub2() {
    cerr << __func__ << endl;
    int max_n = 100000;
    int n = randInt(10000, max_n);
    cout << n << "\n";
    vector < int > a = randList(n, 1, n);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << randInt(1, n) << "\n";
    return;
}

void sub3() {

}

void sub4() {

}

int main() {
    srand(time(NULL));

    for (int i = 1; i <= 100; ++i) {
        cerr << "Test: " << i << "\n\n";
        string s = to_string(i) + ".in";
        freopen(s.c_str(), "w", stdout);
        if (i <= 2) {
            sub0();
        }
        else if (i <= 30) {
            sub1();
        }
        else if (i <= 60) {
            sub2();
        }
        else if (i <= 90) {
            // sub3();
        }
        else {
            // sub4();
        }
    }

    
    return 0;
}