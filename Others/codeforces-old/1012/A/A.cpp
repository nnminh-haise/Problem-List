#include <bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);
#define ll long long

using namespace std;

const int inf = 1e9 + 7;

int n;
vector < int > a;

int main() {
    fastIO
    
    cin >> n;
    a.resize(2 * n);
    for (int i = 0; i < (2 * n); ++i)
        cin >> a[i];
    
    sort(a.begin(), a.end());

    if (n == 1) {
        cout << "0\n";
        return 0;
    }

    int curr = inf;
    for (int i = 1; i < n; ++i)
        curr = min(curr, a[i + n - 1] - a[i]);

    ll f = (ll)(a[2 * n - 1] - a[0]) * (ll)curr;
    ll g = (ll)(a[n - 1] - a[0]) * (ll)(a[2 * n - 1] - a[n]);
    cout << min(f, g) << "\n";
}