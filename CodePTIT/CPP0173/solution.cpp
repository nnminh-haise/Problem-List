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
        ULL gcd(ULL a, ULL b) {
            return (b ? gcd(b, a % b) : a);
        }

        ULL lcm(ULL a, ULL b) {
            return a * b / gcd(a, b);
        }

        Solution() {
            ULL x, y, z, n;
            cin >> x >> y >> z >> n;

            ULL v = lcm(x, lcm(y, z));
            if (v <= pow(10, n) - 1) {
                ULL val = pow(10, n - 1);
                val = ceil((long double)val / (long double)v);
                val = val * v;
                cout << val << "\n";
            }
            else {
                cout << -1 << "\n";
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