#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define LL long long

using namespace std;

int main() {
    FASTIO;

    // freopen("data.txt", "r", stdin);

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        LL res = (LL)(i * i * (LL)(i * i - 1)) / 2 - (LL)4 * (i - 1) * (i - 2);
        cout << res << endl;
    }

    return 0;
}
