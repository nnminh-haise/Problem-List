#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <cstdlib>

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
        int getFactors(int n) {
            int ans = 0, p = 2;
            while (n > 1) {
                int d = 0;
                while (n % p == 0) {
                    n /= p;
                    ++d;
                }
                ans += (d > 1 ? 4 : d);
                ++p;
            }
            return ans;
        }

        Solution() {
            int n;
            cin >> n;
            int res = getFactors(n);
            if (res == 3) {
                cout << 1 << endl;
            }
            else {
                cout << 0 << endl;
            }
            return;
        }
};

int main() {
    FASTIO;
    // FILEIO;

    int queries = 1;
    cin >> queries;
    while (queries--) {
        Solution solution;
    }

    return 0;
}