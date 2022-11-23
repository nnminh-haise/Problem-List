#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;
const int MOD = 14062008;

int n, m;
vector < int > f, broken;

int main() {
    fastIO
    fileInput("vsteps")

    cin >> n >> m;
    f.resize(n + 1, 0);
    broken.resize(n + 1, 0);
    f[0] = 0;
    f[1] = 1;
    for (int i = 1; i <= m; ++i) {
        int x;
        cin >> x;
        broken[x] = 1;
    }
    for (int i = 2; i <= n; ++i)
        if (broken[i]) f[i] = 0;
        else f[i] = ((f[i - 1] % MOD) + (f[i - 2] % MOD)) % MOD;
    cout << f[n] % MOD << endl;
}