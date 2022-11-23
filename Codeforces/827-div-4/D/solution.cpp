#include <iostream>
#include <string.h>
#include <vector>
#include <map>
#include <set>
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
const int MAX_N = 1e4 + 7;
const bool QUERY = true;

class Solution {
    public:
        int gcd(int a, int b) {
            return b ? gcd(b, a % b) : a;
        }

        Solution() {
            int n;
            cin >> n;
            vector < int > a(n);
            for (int& item: a) {
                cin >> item;
            }

            vector < bool > is_used(MAX_N, false);
            vector < int > f(MAX_N, -1);

            for (int i = 0; i < a.size(); ++i) {
                f[a[i]] = max(f[a[i]], i);
            }

            int ans = -1;
            for (int i = 1; i <= 1000; ++i) {
                for (int j = 1; j <= 1000; ++j) {
                    if (f[i] != -1 && f[j] != -1 && gcd(a[f[i]], a[f[j]]) == 1) {
                        ans = max(ans, f[j] + f[i] + 2);
                    }
                }
            }
            cout << ans << endl;

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