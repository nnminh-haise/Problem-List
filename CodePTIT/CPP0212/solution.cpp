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
const int MOD = 1e9 + 7;
const bool QUERY = true;

class Solution {
    public:
        LL binpow(LL a, LL b, LL m) {
            a %= m;
            LL res = 1;
            while (b > 0) {
                if (b & 1)
                    res = res * a % m;
                a = a * a % m;
                b >>= 1;
            }
            return res;
        }


        Solution() {
            int n, x;
            cin >> n >> x;
            int* a = new int [n];
            REP(i, n) {
                cin >> a[i];
            }

            LL sum = 0;
            REP(i, n) {
                sum = (sum % MOD + ((a[i] % MOD * (LL)binpow(x, n - 1 - i, MOD) % MOD) % MOD) % MOD) % MOD;
            }

            cout << sum << endl;
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