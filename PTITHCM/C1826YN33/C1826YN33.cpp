#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);
#define ii pair < int, int >
#define fi first
#define se second

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e3 + 7;
const int dx[] = {0, 0, -1, 1};
const int dy[] = {-1, 1, 0, 0};

int n, m, answer = 0;
bool g[N][N];

bool inside(int x, int y) {
    return (1 <= x and x <= n and 1 <= y and y <= m);
}

void DFS(ii u) {
    g[u.fi][u.se] = 0;

    for (int k = 0; k < 4; ++k) {
        ii v = ii(u.fi + dx[k], u.se + dy[k]);
        if (inside(v.fi, v.se) == true and g[v.fi][v.se] == 1) {
            DFS(v);
        }
    }
}

int main() {
    fastIO
    fileInput("C1826YN33")
    cin >> n >> m;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> g[i][j];

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (g[i][j] == 1) {
                DFS(ii(i, j));
                answer++;
            }
        }
    }
    cout << answer << endl;
}
