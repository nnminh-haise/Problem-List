#include <iostream>
#include <vector>
#include <algorithm>

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
        /**
         * A backtracking function that prints all the possible ways to roll a dice that sum up all the value equal n.
         * 
         * @param left the value left behind need to roll.
         * @param ans the number of ways.
         * @param x the current stage of the roll.
         */
        void backTracking(int left, int& ans, vector <int>& x) {
            if (left == 0) {
                ans += 1;
                // for (int item: x) {
                //     cout << item << " ";
                // }
                // cout << endl;
                return;
            }
            for (int val = 1; val <= 6; ++val) {
                if (left - val >= 0) {
                    x.push_back(val);
                    backTracking(left - val, ans, x);
                    x.pop_back();
                }
            }
        }

        Solution() {
            int n;
            cin >> n;
            int ans = 0;
            vector <int> x;
            backTracking(n, ans, x);
            cout << ans << endl;

            return;
        }
};

int main() {
    FASTIO;
    // FILEIO;

    int queries = 1;
    while (queries--) {
        Solution solution;
    }

    return 0;
}