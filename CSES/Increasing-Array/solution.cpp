#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    //freopen("data.txt", "r", stdin);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        int j = i;
        while (j < n and a[i] >= a[j + 1]) {
            ++j;
        }
        if (j == n) {
            for (int p = i; p < n; ++p) {
                ans += abs(a[i] - a[p]);
            }
            break;
        }
        for (int p = i; p <= j; ++p) {
            ans += abs(a[i] - a[p]);
        }
        i = j;
    }
    cout << ans << endl;

    return 0;
}
