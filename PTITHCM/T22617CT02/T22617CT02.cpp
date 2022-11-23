#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

bool cmp(int a, int b) {
    return (a < b);
}

int main() {
    fastIO
    fileInput("T22617CT02")

    int n;
    map < int, vector < int > > db;
    vector < int > f, ans;
    cin >> n;
    ans.resize(n + 1);
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        db[x].push_back(i);
        if (db[x].size() == 1) f.push_back(x);
    }
    sort(f.begin(), f.end(), cmp);
    int rank = db.size();
    for (int x: f) {
        for (int pos: db[x]) {
            ans[pos] = rank;
        }
        rank--;
    }
    for (int i = 1; i <= n; ++i) cout << ans[i] << " ";
}