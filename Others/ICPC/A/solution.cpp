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
const bool QUERY = false;

class Solution {
    public:
        Solution() {
            int n, k;
            cin >> n >> k;
            string s;
            cin >> s;

            int counter = 1;
            int ak = 0, bk = 0;
            int l = 0, r = s.length() - 1;
            while (l <= r) {
                if (s[l] == 'W') {
                    ++l;
                }
                else if (s[r] == 'W') {
                    --r;
                }
                else if (s[l] == 'B') {
                    if (counter % 2 == 1) {
                        ++ak;
                        if (ak == k) {
                            cout << "NO\n";
                            return;
                        }
                    }
                    else {
                        ++bk;
                        if (bk == k) {
                            cout << "YES\n";
                            return;
                        }
                    }
                    ++l;
                }
                else if (s[r] == 'B') {
                    if (counter % 2 == 1) {
                        ++ak;
                        if (ak == k) {
                            cout << "NO\n";
                            return;
                        }
                    }
                    else {
                        ++bk;
                        if (bk == k) {
                            cout << "YES\n";
                            return;
                        }
                    }
                    --r;
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