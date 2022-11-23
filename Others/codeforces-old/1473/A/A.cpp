#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

bool calculate(vector < int > &a, int k) {
    sort(a.begin(), a.end());
    if (a.back() <= k) return (true);
    int index = upper_bound(a.begin(), a.end(), k) - a.begin();
    if (a[0] + a[1] <= k) return (true);
    return (false);
}

int main() {
    fastIO
    fileInput("A")

    int query;
    cin >> query;

    while (query--) {
        int n, k;
        vector < int > a;
        cin >> n >> k;
        a.resize(n);
        for (int &x: a) cin >> x;
        bool res = calculate(a, k);
        if (res) cout << "YES\n";
        else cout << "NO\n";
    }
}