#include <iostream>

using namespace std;

const int MAX_N = 1e3 + 7;

int queries, n, a[MAX_N];

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    cin >> queries;

    while (queries--) {
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int p = a[0];
        for (int i = 1; i < n; ++i) {
            p = gcd(p, a[i]);
        }

        if (p == 1) {
            cout << 0 << "\n";
        }
        else {
            cout << -1 << "\n";
        }
    }

    return 0;
}