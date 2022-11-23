#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define FILEIO freopen("data.txt", "r", stdin);
#define FOR_EACH(s) for (int i = 0; i < (int)s.size(); ++i)
#define REP(i, n) for (int i = 0; i < n; ++i)
#define FOR(i, l, r) for (int i = l; i <= r; ++i)
#define REV(i, r, l) for (int i = r; i >= l; --i)

typedef long long LL;
typedef pair < int, int > PII;
typedef vector < int > VI;
typedef vector < pair < int, int > > VPII;

const int INF = 1e9 + 7;
const int dx[] = {0, 0, -1, 1};
const int dy[] = {-1, 1, 0, 0};

class Solution {
    public:
        void backTrack(int index, const int n, const int m, int **x) {
            if (index == n + 1) {
                REP(i, m) {
                    REP(j, n) {
                        cout << x[i][j];
                    }
                    cout << "\n";
                }
            }
            else {
                if (index > 1) {
                    int p = pow(2, n) / 2;
                    REP(i, p) {
                        REV(j, n, n - (index - 1))
                    }
                }
                
            }
        }

        Solution() {
            int n, m;
            cin >> n;

            m = pow(2, n);
            int **x = new int* [m];
            REP(i, m)
                x[i] = new int[n];

            REP(i, m)
                REP(j, n)
                    x[i][j] = 0;
            


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