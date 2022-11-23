#include <iostream>
#include <cstdlib>
#include <algorithm>    // std::shuffle
#include <array>        // std::array
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock

using namespace std;

#define shuffle(a) shuffle(a.begin(), a.end(), default_random_engine(seed));

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

int randInt(int min_value, int max_value) {
    return rand() % (max_value - min_value + 1) + min_value;
}

int main() {
    srand(time(NULL));


    for (int i = 1; i <= 100; ++i) {
        string in = to_string(i) + ".in";
        freopen(in.c_str(), "w", stdout);

        if (i <= 5) {
            int min_n = 10, max_n = 20;
            int n = randInt(min_n, max_n);
            cout << n << endl;

            vector < int > vals;
            for (int i = 1; i <= n; ++i) {
                vals.push_back(i);
            }
            vals.push_back(randInt(1, n));

            shuffle(vals)

            for (int i = 0; i < (int)vals.size(); ++i) {
                cout << vals[i] << (i < (int)vals.size() - 1 ? " " : "\n");
            }
        }
        else if (i <= 30) {
            int min_n = 10, max_n = 1000;
            int n = randInt(min_n, max_n);
            cout << n << endl;

            vector < int > vals;
            for (int i = 1; i <= n; ++i) {
                vals.push_back(i);
            }
            vals.push_back(randInt(1, n));

            shuffle(vals)

            for (int i = 0; i < (int)vals.size(); ++i) {
                cout << vals[i] << (i < (int)vals.size() - 1 ? " " : "\n");
            }
        }
        else if (i <= 60) {
            int min_n = 1000, max_n = 100000;
            int n = randInt(min_n, max_n);
            cout << n << endl;

            vector < int > vals;
            for (int i = 1; i <= n; ++i) {
                vals.push_back(i);
            }
            vals.push_back(randInt(1, n));

            shuffle(vals)

            for (int i = 0; i < (int)vals.size(); ++i) {
                cout << vals[i] << (i < (int)vals.size() - 1 ? " " : "\n");
            }
        }
        else {
            int min_n = 100000, max_n = 1000000;
            int n = randInt(min_n, max_n);
            cout << n << endl;

            vector < int > vals;
            for (int i = 1; i <= n; ++i) {
                vals.push_back(i);
            }
            vals.push_back(randInt(1, n));

            shuffle(vals)

            for (int i = 0; i < (int)vals.size(); ++i) {
                cout << vals[i] << (i < (int)vals.size() - 1 ? " " : "\n");
            }
        }
    }
    return 0;
}