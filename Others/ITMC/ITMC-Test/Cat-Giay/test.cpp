#include <iostream>
#include <cstdlib>

using namespace std;

int min_n, max_n;
int min_k, max_k;
int min_q, max_q;

int main() {
    for (int i = 1; i <= 30; ++i) {
        string in = to_string(i) + ".in";
        freopen(in.c_str(), "w", stdout);
        if (i <= 2) {
            min_n = 2;
            max_n = 10;
            min_q = 2;
            max_q = 10;
            int q = rand() % (max_q - min_q + 1) + min_q;
            cout << q << "\n";
            while (q--) {
                int n = rand() % (max_n - min_n + 1) + min_n;
                int k = rand() % (n) + 1;
                cout << n << " " << k << "\n";
            }
        }
        else if (i <= 15) {
            min_n = 50;
            max_n = 100;
            min_q = 50;
            max_q = 100;
            int q = rand() % (max_q - min_q + 1) + min_q;
            cout << q << "\n";
            while (q--) {
                int n = rand() % (max_n - min_n + 1) + min_n;
                int k = rand() % (n) + 1;
                cout << n << " " << k << "\n";
            }
        }
        else {
            min_n = 1000;
            max_n = 10000;
            min_q = 1000;
            max_q = 10000;
            int q = rand() % (max_q - min_q + 1) + min_q;
            cout << q << "\n";
            while (q--) {
                int n = rand() % (max_n - min_n + 1) + min_n;
                int k = rand() % (n) + 1;
                cout << n << " " << k << "\n";
            }
        }
    }
    return 0;
}