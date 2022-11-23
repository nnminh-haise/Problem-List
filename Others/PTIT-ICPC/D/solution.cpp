#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int main() {
    FASTIO

    //freopen("data.txt", "r", stdin);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    const int inf = 1e9 + 7;
    int ans = -inf;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                if (i != j and i != k and j != k) {
                    ans = max(ans, a[i] * a[j] * a[k]);
                }
            }
        }
    }
    cout << ans << endl;
    
    return 0;
}