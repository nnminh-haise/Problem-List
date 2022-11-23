#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

#define ii pair < int, int >
#define fi first
#define se second

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int main() {
    fastIO
    fileInput("D")
    
    int n;
    cin >> n;
    vector < ii > f;
    f.resize(n);
    for (ii &x: f) {
        int a, b;
        cin >> a >> b;
        x = make_pair(a + b, a - b);
    }

    sort(f.begin(), f.end());
    int res = 1, s, e;
    
}