#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int n, f0, f1, f2;

int main() {
    fastIO
    fileInput("nkcable")

    cin >> n;
    f0 = 0;
    f1 = inf;
    for (int i = 1; i <= n - 1; ++i) {
        int x;
        cin >> x;
        f2 = min(f0, f1) + x;
        f0 = f1;
        f1 = f2;
    }
    cout << f2 << endl;
}