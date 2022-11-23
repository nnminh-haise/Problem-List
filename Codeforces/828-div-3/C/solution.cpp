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
            int n;
            char u;
            string s, p;
            cin >> n >> u >> s;

            p = s;
            for (int i = 0; i < n; ++i) {
                p += s[i];
            }

            for (int i = 0; i < p.length(); ++i) {
                if (p[i] == u) {
                    int j = i + 1;
                    while (j != )
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