#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e3 + 7;

int query, n;
int a[N][N];

int main() {
    fastIO
    fileInput("C80928MC11");

    cin >> query;
    while (query--) {
        cin >> n;
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j) cin >> a[i][j];
        for (int i = 1; i <= n; ++i) {
            if (i % 2 == 0) for (int j = n; j >= 1; j--) cout << a[i][j] << " ";
            else for (int j = 1; j <= n; ++j) cout << a[i][j] << " ";
            cout << endl;
        }
    }
}
