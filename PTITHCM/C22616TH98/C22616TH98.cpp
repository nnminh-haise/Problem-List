#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 2e5 + 7;

int n;
vector < int > g[N];
int visited[N];

void DFS(int u) {
    visited[u] = 1;
    cout << u << " ";
    for (int v: g[u]) {
        if (!visited[v]) {
            DFS(v);
            cout << u << " ";
        }
    }
}

int main() {
    fastIO
    fileInput("C22616TH98");
    cin >> n;
    memset(visited, 0, sizeof(visited));
    for (int i = 1; i < n; ++i) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for (int i = 1; i <= n; ++i) {
        sort(g[i].begin(), g[i].end());
    }
    DFS(1);
}
