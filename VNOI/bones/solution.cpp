#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    FASTIO;
    #ifndef ONLINE_JUDGE
        freopen("data.txt", "r", stdin);
    #endif

    int a, b, c;
    cin >> a >> b >> c;
    int* dp = new int [2000];
    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= b; ++j) {
            for (int k = 1; k <= c; ++k) {
                ++dp[i + j + k];
            }
        }
    }

    int ans = 0;
    dp[0] = -1;

    for (int i = 3; i <= a + b + c; ++i) {
        if (dp[ans] < dp[i]) {
            ans = i;
        }
    }

    cout << ans << endl;

    return 0;
}