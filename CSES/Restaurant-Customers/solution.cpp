// TODO: solve this problem

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
        bool cmp(II a, II b) {
            return ((a.FI < ))
        }

        Solution() {
            int n;
            cin >> n;
            VII a(n);
            REP(i, n) {
                cin >> a[i].FI >> a[i].SE;
            }
            const int N = 1e9 + 7;
            int* f = new int [N];
            REP(i, N) {
                f[i] = 0;
            }

            REP(i, n) {
                FOR(j, a[i].FI, a[i].SE) {
                    ++f[j];
                }      
            }

            
            return;
        }
};

int main() {
    FASTIO;
    FILEIO;

    int queries = 1;
    while (queries--) {
        Solution solution;
    }

    return 0;
}