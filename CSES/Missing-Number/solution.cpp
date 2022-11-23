#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int n;
    cin >> n;
    vector < int > a(n - 1);
    for (int &item: a)
        cin >> item;

    vector < int > f(n + 1, 0);
    for (int item: a)
        ++f[item];

    for (int i = 1; i <= n; ++i)
        if (f[i] == 0) {
            cout << i << endl;
            return 0;
        }

    cout << -1 << endl;

    return 0;
}