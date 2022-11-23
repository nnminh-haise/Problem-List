#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e5 + 7;

int n, x;
vector < int > g[N];
int visited[N], dist[N];

void BFS() {
    queue < int > q;
    q.push(x);
    visited[x] = 1;
    dist[x] = 0;

    while (q.empty() == false) {
        int u = q.front();
        q.pop();
        for (int v: g[u]) {
            if (!visited[v]) {
                visited[v] = 1;
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
//    for (int i = 1; i <= n; ++i) {
//        cout << i << " " << dist[i] << endl;
//    }
    int ans = -inf;
    for (int i = 1; i <= n; ++i) ans = max(ans, dist[i]);
    cout << ans << endl;
}

int main() {
    fastIO
    fileInput("I11324AB00")
    cin >> n >> x;
    for (int i = 1; i <= n; ++i) visited[i] = dist[i] = 0;
    for (int i = 1; i <= n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    BFS();
}
