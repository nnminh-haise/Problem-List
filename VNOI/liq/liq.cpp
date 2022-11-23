#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int n;
vector < int > a;
vector < int > f;

int main() {
    fastIO
    fileInput("liq")
    cin >> n;
    a.resize(n);
    f.resize(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    f[0] = 1;
    for (int i = 1; i < n; ++i) {
        f[i] = 1;
        for (int j = 0; j < i; ++j)
            f[i] = max(f[i], (a[j] < a[i]) * (f[j] + 1));
    }
    int answer = 1;
    for (int i = 0; i < n; ++i) answer = max(answer, f[i]);
    cout << answer << endl;
}
