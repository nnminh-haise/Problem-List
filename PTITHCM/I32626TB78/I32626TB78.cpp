#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e2 + 7;

int n, counter = 0;
int a[N][N];

int main() {
    fastIO
    fileInput("I32626TB78")

    cin >> n;

    for (int k = 1; k <= n/2; ++k) {
        for (int j = k; j <= n - k; ++j) {
            a[k][j] = ++counter;
        }
        for (int i = k; i <= n - k; ++i) {
            a[i][n + 1 - k] = ++counter;
        }
        for (int j = n + 1 - k; j >= k + 1; --j) {
            a[n + 1 - k][j] = ++counter;
        }
        for (int i = n + 1 - k; i >= k + 1; --i) {
            a[i][k] = ++counter;
        }
    }
    if (n % 2) a[n / 2 + 1][n / 2 + 1] = n * n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            //if (a[i][j] < 10) cout << 0;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
