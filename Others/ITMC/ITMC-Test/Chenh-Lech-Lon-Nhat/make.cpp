#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

struct Data {
    int l, r;
    int val;

    Data(int low = 0, int high = 0) {
        l = low;
        r = high;
        return;
    }

    int rnd() {
        return rand() % (this->r - this->l + 1) + this->l;
    }
};

int main() {
    for (int i = 1; i <= 30; ++i) {
        string in = to_string(i) + ".in";
        string out = to_string(i) + ".out";
        freopen(in.c_str(), "r", stdin);
        freopen(out.c_str(), "w", stdout);

        int query;
        cin >> query;
        while (query--) {
            int n, k;
            long long s = 0, s1 = 0, s2 = 0;
            vector <int> a;

            cin >> n >> k;
            a.resize(n);
            for (int &x: a) cin >> x;

            sort(a.begin(), a.end());
            for (int x: a) s += x;
            for (int i = 0; i < k; ++i) s1 += a[i];
            for (int i = n - 1, j = k; j > 0; j--) s2 += a[i--];

            cout << max(abs(s1 - (s - s1)), abs(s2 - (s - s2))) << "\n";
        }

    }
    return 0;
}