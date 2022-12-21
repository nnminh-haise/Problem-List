#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    FASTIO;
    #ifndef ONLINE_JUDGE
        freopen("data.txt", "r", stdin);
    #endif

    const int MOD = 14062008;

    int n, m;
    cin >> n >> m;
    int* dp = new int [n + 1];
    int* f = new int [n + 1];
    for (int i = 1; i <= n; ++i) {
        f[i] = 1;
        dp[i] = 0;
    }

    for (int i = 1; i <= m; ++i) {
        int temp;
        cin >> temp;
        f[temp] = 0;
    }

    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; ++i) {
        dp[i] = f[i] * (((dp[i - 1] % MOD) + (dp[i - 2] % MOD)) % MOD);
    }

    cout << dp[n] % MOD << endl;

    return 0;
}