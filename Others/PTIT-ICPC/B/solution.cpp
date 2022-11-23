#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int main() {
    FASTIO

    //freopen("data.txt", "r", stdin);

    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int ans = 0;
        for (int i = 1; i < n; ++i) {
            if (a[i] > a[i - 1] and a[i] > a[i + 1]) {
                ++ans;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}