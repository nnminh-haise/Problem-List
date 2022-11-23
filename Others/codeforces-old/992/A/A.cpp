#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int n, ans = 0;
map < int, int > db;

int main() {
    fastIO
    fileInput("A")

    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        db[x]++;
        if (db[x] == 1 and x != 0) ans++;
    }
    cout << ans << endl;
}