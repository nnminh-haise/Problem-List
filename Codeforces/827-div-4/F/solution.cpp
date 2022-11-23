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
            int q;
            cin >> q;
            LL orther_a = 0, orther_b = 0, cnt_a = 0, cnt_b = 0;
            REP(i, q) {
                int type, k;
                string s;
                cin >> type >> k >> s;
                for (int i = 0; i < s.length(); ++i) {
                    if (type == 1) {
                        if (s[i] == 'a') {
                            cnt_a += k;
                        }
                        else {
                            orther_a = 1;
                        }
                    }
                    else {
                        if (s[i] == 'a') {
                            cnt_b += k;
                        }
                        else {
                            orther_b = 1;
                        }
                    }
                }
                if (orther_b) {
                    cout << "YES\n";
                }
                else if (orther_a == 0 && cnt_a < cnt_b) {
                    cout << "YES\n";
                }
                else {
                    cout << "NO\n";
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