#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 2e2 + 7;

int n, m;
int a[N][N], f[N][N];

int main() {
    fastIO
    fileInput("qbmax")
    cin >> m >> n;
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];
    for (int i = 1; i <= n; ++i) f[0][i] = f[m + 1][i] = -inf;
    for (int i = 1; i <= m; ++i) f[i][1] = a[i][1];
    for (int i = 1; i <= m; ++i)
        for (int j = 2; j <= n; ++j)
            f[i][j] = -inf;
    for (int j = 2; j <= n; ++j)
        for (int i = 1; i <= m; ++i) {
            f[i][j] = max(f[i][j - 1], max(f[i - 1][j - 1], f[i + 1][j - 1])) + a[i][j];
        }

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << f[i][j] << " ";
        }
        cout << endl;
    }
    int answer = -inf;
    for (int i = 1; i <= m; ++i) answer = max(answer, f[i][n]);
    cout << answer << endl;
}
