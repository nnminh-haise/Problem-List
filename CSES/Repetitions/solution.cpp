#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    //freopen("data.txt", "r", stdin);

    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < (int)s.length(); ++i) {
        int j = i;
        while (j < (int)s.length() and s[j] == s[j + 1]) {
            ++j;
        }
        ans = max(ans, j - i + 1);
        i = j;
    }
    cout << ans << endl;
    return 0;
}
