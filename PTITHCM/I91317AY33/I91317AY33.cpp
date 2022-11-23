#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e4 + 7;

int n, m, x, k;
vector < int > g[N];
int visited[N], level[N];

void prepare() {
    for (int i = 0; i < n; ++i) {
        level[i] = -1;
        visited[i] = 0;
    }
}

void BFS() {
    queue < int > q;
    q.push(k);
    visited[k] = 1;
    level[k] = 0;

    while (q.empty() == false) {
        int u = q.front();
        q.pop();
        for (int v: g[u]) {
            if (visited[v] == false) {
                q.push(v);
                visited[v] = 1;
                level[v] = level[u] + 1;
            }
        }
    }
    cout << level[x] << endl;
}

int main() {
    fastIO
    fileInput("I91317AY33")
    cin >> n >> m >> x >> k;
    for (int i = 1; i <= m; ++i) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    prepare();
    BFS();
}
