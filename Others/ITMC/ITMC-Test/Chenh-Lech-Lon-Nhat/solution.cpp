#include <bits/stdc++.h>

using namespace std;

int main() {
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
    return 0;
}