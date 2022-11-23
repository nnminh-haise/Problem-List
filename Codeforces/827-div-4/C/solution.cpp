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
            char a[8][8];
            cin.ignore();
            REP(i, 8) {
                REP(j, 8) {
                    cin >> a[i][j];
                }
            }

            REP(i, 8) {
                int cnt = 0;
                REP(j, 8) {
                    if (a[i][j] == 'R') {
                        ++cnt;
                    }
                }
                if (cnt == 8) {
                    cout << "R\n";
                    return;
                }
            }
            cout << "B\n";
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