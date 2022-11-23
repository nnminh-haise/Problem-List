#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e4 + 7;
const int dx[] = {0, 0, -1, 1};
const int dy[] = {-1, 1, 0, 0};

int n, m, answer = 0;
int g[N][N], visited[N][N];

bool inside(int x, int y) {
    return (1 <= x and x <= n and 1 <= y and y <= m);
}

void BFS(int I, int J) {
    queue < pair < int, int > > q;
    q.push(make_pair(I, J));
    visited[I][J] = 1;

    while (!q.empty()) {
        pair < int, int > u = q.front();
        q.pop();
        for (int k = 0; k < 4; ++k) {
            pair < int, int > v = make_pair(u.first + dx[k], u.second + dy[k]);
            if (inside(v.first, v.second) and !visited[v.first][v.second]) {
                visited[v.first][v.second] = 1;
                q.push(v);
            }
        }
    }
}

int main() {
    fastIO
    fileInput("C1826YN33")
    cin >> n >> m;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            visited[i][j] = 0;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> g[i][j];
            if (!g[i][j]) visited[i][j] = 1;
        }
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (g[i][j] == 1 and visited[i][j] == 0) {
                BFS(i, j);
                answer++;
            }
        }
    }
    cout << answer << endl;
}
