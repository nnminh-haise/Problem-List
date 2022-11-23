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
const int MAX_N = 1e6 + 7;
const bool QUERY = true;

class Solution {
    public:
        Solution() {
            int n, q;
            cin >> n >> q;
            vector < ULL > f;
            vector < int > g;
            f.push_back(0);
            for (int i = 1; i <= n; ++i) {
                int x;
                cin >> x;
                f.push_back(f.back() + x);
                if (i == 1) {
                    g.push_back(x);
                }
                else {
                    g.push_back(max(g.back(), x));
                }
            }

            for (int i = 1; i <= q; ++i) {
                int k;
                cin >> k;
                int id = upper_bound(g.begin(), g.end(), k) - g.begin();
                cout << f[id] << " ";
            }
            cout << endl;

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
