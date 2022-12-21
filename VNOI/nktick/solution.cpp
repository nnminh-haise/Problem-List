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
    int* a = new int [n];
    int* b = new int [n - 1];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; ++i) {
        cin >> b[i];
    }

    long long* dp = new long long [n];

    dp[0] = a[0];
    dp[1] = min(a[1] + a[0], b[0]);
    for (int i = 2; i < n; ++i) {
        dp[i] = min(a[i] + dp[i - 1], b[i - 1] + dp[i - 2]);
    }

    cout << dp[n - 1] << endl;
    return 0;
}