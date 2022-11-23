#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int n, answer = 1;
vector < int > a, g;

int main() {
    fastIO
    fileInput("lis")
    cin >> n;
    a.resize(n + 1);
    g.resize(n + 1, inf);
    for (int i = 1; i <= n; ++i) cin >> a[i];
    g[0] = -inf;
    for (int i = 1; i <= n; ++i) {
        int k = lower_bound(g.begin(), g.end(), a[i]) - g.begin();
        g[k] = a[i];
        answer = max(answer, k);
    }
    cout << answer << endl;
}
