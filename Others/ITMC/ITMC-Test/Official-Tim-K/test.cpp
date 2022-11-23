#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>    // std::shuffle
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock

using namespace std;

int randInt(int min_value, int max_value) {
    return rand() % (max_value - min_value + 1) + min_value;
}

int main() {
    srand(time(NULL));
    for (int i = 1; i <= 30; ++i) {
        string in = to_string(i) + ".in";
        freopen(in.c_str(), "w", stdout);

        if (i <= 5) {
            int min_q = 1, max_q = 5;
            int min_n = 10, max_n = 20;
            int min_v = 10, max_v = 50;
            int q = randInt(min_q, max_q);
            int n = randInt(min_n, max_n);
            vector < int > a(n);
            cout << n << " " << q << endl;
            for (int i = 0; i < n; ++i) {
                a[i] = randInt(min_v, max_v);
            }
            for (int i = 0; i < n; ++i) {
                cout << a[i] << (i < n - 1 ? " " : "\n");
            }
            while (q--) {
                bool flag = randInt(0, 1);
                if (flag) cout << randInt(min_v, max_v) << "\n";
                else cout << a[randInt(0, n - 1)] << "\n";
            }
        }
        else if (i <= 15) {
            int min_q = 500, max_q = 1000;
            int min_n = 500, max_n = 1000;
            int min_v = 100, max_v = 1000;
            int q = randInt(min_q, max_q);
            int n = randInt(min_n, max_n);
            vector < int > a(n);
            cout << n << " " << q << endl;
            for (int i = 0; i < n; ++i) {
                a[i] = randInt(min_v, max_v);
            }
            for (int i = 0; i < n; ++i) {
                cout << a[i] << (i < n - 1 ? " " : "\n");
            }
            while (q--) {
                bool flag = randInt(0, 1);
                if (flag) cout << randInt(min_v, max_v) << "\n";
                else cout << a[randInt(0, n - 1)] << "\n";
            }
        }
        else {
            int min_q = 10000, max_q = 100000;
            int min_n = 10000, max_n = 1000000;
            int min_v = 1000000, max_v = 100000000;
            int q = randInt(min_q, max_q);
            int n = randInt(min_n, max_n);
            vector < int > a(n);
            cout << n << " " << q << endl;
            for (int i = 0; i < n; ++i) {
                a[i] = randInt(min_v, max_v);
            }
            for (int i = 0; i < n; ++i) {
                cout << a[i] << (i < n - 1 ? " " : "\n");
            }
            while (q--) {
                bool flag = randInt(0, 1);
                if (flag) cout << randInt(min_v, max_v) << "\n";
                else cout << a[randInt(0, n - 1)] << "\n";
            }
        }
    }

    return 0;
}