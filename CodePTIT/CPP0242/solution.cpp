#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <cstdlib>

using namespace std;

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define FILEIO freopen("data.txt", "r", stdin);
#define FOR_EACH(s) for (int i = 0; i < (int)s.size(); ++i)
#define REP(i, n) for (int i = 0; i < n; ++i)
#define FOR(i, l, r) for (int i = l; i <= r; ++i)
#define REV(i, r, l) for (int i = r; i >= l; --i)
#define FI first
#define SE second

typedef long long LL;
typedef pair < int, int > II;
typedef vector < int > VI;
typedef vector < pair < int, int > > VII;

const int INF = 1e9 + 7;
const int dx[] = {0, 0, -1, 1};
const int dy[] = {-1, 1, 0, 0};

class Solution {
    public:
        Solution() {
            int n;
            cin >> n;
            vector <int> a(n), b(n);
            for (int& item: a) {
                cin >> item;
            }
            for (int& item: b) {
                cin >> item;
            }

            vector <int> f(n), g(n);
            f[0] = a[0];
            g[0] = b[0];
            for (int i = 1; i < n; ++i) {
                f[i] = f[i - 1] + a[i];
                g[i] = g[i - 1] + b[i];
            }

            int ans = 1;
            FOR(i, 0, n - 1) {
                FOR(j, i + 1, n - 1) {
                    if (f[j] - f[i - 1] == g[j] - g[i - 1]) {
                        ans = max(ans, j - i + 1);
                    }
                }
            }
            cout << ans << endl;
            return;
        }
};

int main() {
    FASTIO;
    FILEIO;

    int queries = 1;
    cin >> queries;
    while (queries--) {
        Solution solution;
    }

    return 0;
}