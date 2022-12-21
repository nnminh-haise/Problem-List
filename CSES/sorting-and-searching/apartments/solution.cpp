#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int* a = new int [n];
    int* b = new int [m];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + m);

    int ans = 0;
    for (int i = 0, j = 0; j < m and i < n;) {
        if (abs(a[i] - b[j]) <= k) {
            ++ans;
            ++i;
            ++j;
        }
        else if (a[i] - b[j] > k) {
            ++j;
        }
        else {
            ++i;
        }
    }
    cout << ans << endl;
    return 0;
}