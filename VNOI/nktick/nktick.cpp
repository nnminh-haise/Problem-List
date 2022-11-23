#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int n;
vector < int > a, b, f;

int main() {
    fastIO
    fileInput("nktick")
    cin >> n;
    a.resize(n + 1);
    b.resize(n + 1);
    f.resize(n + 1, inf);
    for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int i = 2; i <= n; ++i) cin >> b[i];
    f[0] = 0;
    f[1] = a[1];
    for (int i = 2; i <= n; ++i)
        f[i] = min(a[i] + f[i - 1], b[i] + f[i - 2]);
    cout << f[n] << endl;
}
