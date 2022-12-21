#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    FASTIO;
    #ifndef ONLINE_JUDGE
        freopen("data.txt", "r", stdin);
    #endif

    string s, p;
    cin >> s;
    p = s;
    reverse(p.begin(), p.end());

    int** dp = new int* [(int)s.length() + 1];
    for (int i = 0; i <= (int)s.length(); ++i) {
        dp[i] = new int [(int)s.length() + 1];
    }

    dp[0][0] = 0;
    for (int i = 1; i <= (int)s.length(); ++i) {
        dp[i][0] = 0;
        dp[0][i] = 0;
    }

    for (int i = 1; i <= (int)s.length(); ++i) {
        for (int j = 1; j <= (int)s.length(); ++j) {
            if (s[i - 1] == p[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    int i = s.length(), j = s.length();
    string ans = "";
    while (i >= 1 && j >= 1) {
        if (s[i - 1] == p[j - 1]) {
            ans = s[i - 1] + ans;
            --i;
            --j;
        }
        else {
            if (dp[i - 1][j] == dp[i][j]) {
                --i;
            }
            else if (dp[i][j - 1] == dp[i][j]) {
                --j;
            }
        }
    }

    cout << ans << endl;

    return 0;
}