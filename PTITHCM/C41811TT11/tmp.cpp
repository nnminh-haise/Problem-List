#include <bits/stdc++.h>

using namespace std;

int n, m;
vector < vector < int > > a;

int main() {
    freopen ("input.inp", "r", stdin);

    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        vector < int > tmp;
        for (int j = 1; j <= m; ++j) {
            int x;
            cin >> x;
            tmp.push_back(x);
        }
        a.push_back(tmp);
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}