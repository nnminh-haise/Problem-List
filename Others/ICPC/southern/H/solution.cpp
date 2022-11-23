#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

const long long MOD = 1e9 + 7;

long long cal(string s) {
    long long res = 1;
    for (char chr: s) {
        res = ((res % MOD) * ((chr - '0') % MOD)) % MOD;
    }
    return res;
}

int main() {
    FASTIO;
    #ifndef ONLINE_JUDGE
        freopen("data.txt", "r", stdin);
    #endif

    string l, r;
    cin >> l >> r;

    while (l.length() < r.length()) {
        l = '0' + l;
    }

    int n = r.length();
    string p = string(n, '9');

    for (int i = 0; i < n; ++i) {
        if (r[i] == l[i]) {
            p[i] = r[i];
        }
        else if (r[i] > l[i]) {
            p[i] = r[i] - 1;
            break;
        }
    }

    // cout << p << endl;

    int id = 0;
    while (id < p.length()) {
        if (p[id] == '0') {
            p[id] = '1';
        }
        else {
            break;
        }
        ++id;
    }
    // cout << p << endl;

    cout << max(cal(p), cal(r)) << endl;

    return 0;
}