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
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int odds[2] = {-10, -10};
    int evens[2] = {-10, -10};
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 1) {
            odds[0] = max(odds[0], a[i]);
        }
    }

    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 1 && a[i] != odds[0]) {
            odds[1] = max(odds[1], a[i]);
        }
    }

    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0) {
            evens[0] = max(evens[0], a[i]);
        }
    }

    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0 && a[i] != evens[0]) {
            evens[1] = max(evens[1], a[i]);
        }
    }

    int ans = -1;
    if (odds[0] != -10 && odds[1] != -10) {
        ans = max(ans, odds[0] + odds[1]);
    }
    if (evens[0] != -10 && evens[1] != -10) {
        ans = max(ans, evens[0] + evens[1]);
    }
    cout << ans << endl;

    return 0;
}