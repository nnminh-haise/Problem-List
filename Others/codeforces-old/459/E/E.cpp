#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

#define ii pair < int, int >

using namespace std;

const int inf = 1e9 + 7;
const int N = 3e5 + 7;

struct Edge {
    int u, v, w;
    void show() {
        cout << "{" << u << " - " << v << "} : " << w << "\n";
    }
};

int n, m;
vector < Edge > edges;
vector < ii > f;
vector < int > dp, color;

bool cmp(Edge a, Edge b) {
    return (a.w < b.w);
}

int main() {
    fastIO
    fileInput("E")

    cin >> n >> m;
    edges.resize(m);
    color.resize(n + 1);
    dp.resize(n + 1);
    for (Edge &x: edges) {
        cin >> x.v >> x.u >> x.w;
    }

    sort(edges.begin(), edges.end(), cmp);

    int cnt = 0;
    for (int i = 0; i < m; ++i) {
        Edge x = edges[i];
        if (x.w != cnt) {
            for (int j = 0; j < f.size(); ++j) {
                int v = f[j].first, w = f[j].second;
                color[v] = cnt;
                dp[v] = max(dp[v], w);
            }
            f.clear();
        }
        cnt = x.w;
        if (color[x.v] < x.w and dp[x.u] < dp[x.v] + 1) {
            f.push_back(make_pair(x.u, dp[x.v] + 1));
        }
    }

    if (f.size()) {
        for (int j = 0; j < f.size(); ++j) {
            int v = f[j].first, w = f[j].second;
            color[v] = cnt;
            dp[v] = max(dp[v], w);
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i)
        ans = max(ans, dp[i]);
    cout << ans << "\n";
}