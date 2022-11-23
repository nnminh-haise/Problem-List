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
        const int dx[2] = {1, 0};
        const int dy[2] = {0, 1};

        bool inside(const int n, int x, int y) {
            return (0 <= x && x < n && 0 <= y && y < n);
        }

        void backTracking(const int n, const int k, int i, int j, int& s, int& ans, int** a) {
            if (s == k && i == n - 1 && j == n - 1) {
                ++ans;
                return;
            }
            for (int p = 0; p < 2; ++p) {
                int new_x = i + dx[p];
                int new_y = j + dy[p];
                if (s <= k && inside(n, new_x, new_y)) {
                    s += a[new_x][new_y];
                    backTracking(n, k, new_x, new_y, s, ans, a);
                    s -= a[new_x][new_y];
                }
            }
        }

        Solution() {
            int n, k;
            cin >> n >> k;
            int** a = new int* [n];
            for (int i = 0; i < n; ++i) {
                a[i] = new int [n];
            }

            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    cin >> a[i][j];
                }
            }

            int ans = 0, s = a[0][0];
            backTracking(n, k, 0, 0, s, ans, a);
            cout << ans << endl;
            delete[] a;
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