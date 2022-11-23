#include <iostream>
#include <string.h>
#include <vector>
#include <map>
#include <algorithm>
#include <math.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define REP(i, n) for (int i = 0; i < n; ++i)
#define REV(i, r, l) for (int i = r; i >= l; --i)
#define FI first
#define SE second

typedef long long LL;
typedef unsigned long long ULL;

using namespace std;

const int INF = 1e9 + 7;
const int MAX_N = 1e3 + 7;
const bool QUERY = false;

class Solution {
    public:
        int n, q;
        char a[MAX_N][MAX_N];
        int dp[MAX_N][MAX_N];

        Solution() {
            cin >> n >> q;
            for (int i = 1; i <= n; ++i) {
                for (int j = 1; j <= n; ++j) {
                    cin >> a[i][j];
                }
            }

            for (int i = 1; i <= n; ++i) {
                dp[0][i] = 0;
                dp[i][0] = 0;
            }

            for (int i = 1; i <= n; ++i) {
                for (int j = 1; j <= n; ++j) {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + (a[i][j] == '*' ? 1 : 0);
                }
            }

            while (q--) {
                int x1, y1, x2, y2;
                cin >> x1 >> y1 >> x2 >> y2;

                cout << dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1] << endl;
            }

            return;
        }
};

int main() {
    #ifndef ONLINE_JUDGE
        freopen("data.txt", "r", stdin);
    #endif

    int queries = 1;
    if (QUERY) {
        cin >> queries;
    }
    while (queries--) {
        Solution solution;
    }

    return 0;
}