#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int n, answer = 0, k;
vector < int > a;

int main() {
    fastIO
    fileInput("H")

    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i >= j and a[i] + a[j] <= k) answer++;
        }
    }
    cout << answer << endl;
}
