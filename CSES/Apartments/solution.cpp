#include <bits/stdc++.h>

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
            int n, m, k;
            cin >> n >> m >> k;
            int* a = new int [n];
            int* b = new int [m];

            REP(i, n) {
                cin >> a[i];
            }
            REP(i, m) {
                cin >> b[i];
            }

            sort(a, a + n);
            sort(b, b + m);

            int ans = 0;
            for (int i = 0, j = 0; j < m and i < n;) {
                if (abs(a[i] - b[j]) <= k) {
                    ++ans;
                    ++i;
                    ++j;
                }
                else if (a[i] - b[j] > k) {
                    ++j;
                }
                else {
                    ++i;
                }
            }
            cout << ans << endl;
            return;
        }
};

int main() {
    FASTIO;
    // FILEIO;

    int queries = 1;
    while (queries--) {
        Solution solution;
    }

    return 0;
}