#include <iostream>
#include <cstdlib>

using namespace std;

int max_n = 0, min_n = 0;

int main() {
    for (int i = 1; i <= 30; ++i) {
        string s = to_string(i) + ".in";
        freopen(s.c_str(), "w", stdout);
        if (i <= 2) {
            max_n = 100;
            min_n = 10;
        }
        else if (i <= 15) {
            max_n = 10000;
            min_n = 100;
        }
        else {
            max_n = 100000000;
            min_n = 1000000;
        }

        int n = rand() % (max_n - min_n + 1) + min_n;
        cout << n << "\n";
    }
    return 0;
}