#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e3 + 7;

int n, a[N][N];

int main() {
    fastIO
    fileInput("C72627QT78")
    cin >> n;
    for (int i = 0; i <= n; ++i)
        for (int j = 0; j <= n; ++j)
            a[i][j] = 0;

    a[1][1] = 1;
    a[2][1] = a[2][2] = 1;
    for (int i = 3; i <= n; ++i)
        for (int j = 1; j <= i; ++j)
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (a[i][j] > 0) cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
