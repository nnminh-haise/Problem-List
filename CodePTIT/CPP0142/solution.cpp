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

using namespace std;

const int INF = 1e9 + 7;
const int MAX_N = 1e6 + 7;
const bool QUERY = true;

class Solution {
    public:
        int gcd(int a, int b) {
            return (b ? gcd(b, a % b) : a);
        }

        bool isPrime(int x) {
            if (x < 2) {
                return false;
            }
            if (x == 2 || x == 3) {
                return true;
            }
            if (x % 2 == 0) {
                return false;
            }
            for (int i = 3; i <= sqrt(x); i += 2) {
                if (x % i == 0) {
                    return false;
                }
            }
            return true;
        }

        Solution() {
            int n, t = 0;
            cin >> n;
            for (int i = 1; i <= n; ++i) {
                if (gcd(n, i) == 1) {
                    ++t;
                }
            }
            if (isPrime(t)) {
                cout << "1\n";
            }
            else {
                cout << "0\n";
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