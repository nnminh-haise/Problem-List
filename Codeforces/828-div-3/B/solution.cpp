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
        ULL ans = 0;
        ULL f0 = 0, f1 = 0;

        Solution() {
            int n, q;
            cin >> n >> q;
            for (int i = 1; i <= n; ++i) {
                int val;
                cin >> val;
                ans += val;
                if (val % 2 == 0) {
                    ++f0;
                }
                else {
                    ++f1;
                }
            }
            while (q--) {
                int type;
                cin >> type;
                if (type == 0) {
                    int val;
                    cin >> val;
                    ans += val * f0;
                    cout << ans << "\n";
                    if (val % 2 != 0) {
                        f1 += f0;
                        f0 = 0;
                    }
                }
                else {
                    int val;
                    cin >> val;
                    ans += val * f1;
                    cout << ans << "\n";
                    if (val % 2 != 0) {
                        f0 += f1;
                        f1 = 0;
                    }
                }
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