#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    FASTIO;
    #ifndef ONLINE_JUDGE
        freopen("data.txt", "r", stdin);
    #endif

    int queries;
    cin >> queries;
    while (queries--) {
        int n;
        cin >> n;
        int* a = new int [n + 1];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        long long S = 0;
        for (int i = 0; i < n; ++i) {
            S += a[i];
        }
        a[n] = 0;
        long long ans = -1;
        for (int j = 0; j <= n; ++j) {
            bool flag = true;
            long long s = S - a[j];
            for (int i = 0; i < n; ++i) {
                if (i != j) {
                    if (s - a[i] <= a[i]) {
                        flag = false;
                    }
                }
            }
            if (flag == true) {
                ans = max(ans, s);
            }
        }
        if (ans == -1) {
            cout << 0 << endl;
        }
        else {
            cout << ans << endl;
        }
    }

    return 0;
}