#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    FASTIO;
    #ifndef ONLINE_JUDGE
        freopen("data.txt", "r", stdin);
    #endif

    int n, m;
    cin >> n >> m;
    int* a = new int [n];
    int* b = new int [m];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    sort(a, a + n);
    for (int i = 0; i < m; ++i) {
        int k = lower_bound(a, a + n, b[i]) - a;
        cout << b[i] << " " << a[k] << endl;
    }

    return 0;
}