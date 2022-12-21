#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    FASTIO;
    #ifndef ONLINE_JUDGE
        freopen("data.txt", "r", stdin);
    #endif

    int n;
    cin >> n;
    int *a = new int [n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int *dp = new int [n];
    for (int i = 0; i < n; ++i) {
        dp[i] = 1;
    }

    int ans = 1;
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (a[j] < a[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(ans, dp[i]);
    }

    cout << ans << endl;
    delete[] a;
    delete[] dp;
    return 0;
}