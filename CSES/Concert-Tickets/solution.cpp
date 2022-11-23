// TODO: solve this problem

#include <bits/stdc++.h>

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
        int binarySearch(const int l, const int r, const int value, const int* a, int*& is_used) {
            int left = l, right = r, res = -1;
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (a[mid] <= value) {
                    if (is_used[mid] == false) {
                        res = max(res, mid);
                    }
                    left = mid + 1;
                }
                else {
                    right = mid - 1;
                }
            }
            return res;
        }

        Solution() {
            int n, m;
            cin >> n >> m;
            int* a = new int [n];
            int* b = new int [m];

            REP(i, n) {
                cin >> a[i];
            }

            REP(i, m) {
                cin >> b[i];
            }

            sort(a, a + n);
            int* is_used = new int [n];
            REP(i, n) {
                is_used[i] = false;
            }

            REP(i, m) {
                int res = binarySearch(0, n - 1, b[i], a, is_used);
                if (res != -1) {
                    is_used[res] = true;
                    cout << a[res] << "\n";
                }
                else {
                    cout << -1 << "\n";
                }
            }

            return;
        }
};

int main() {
    FASTIO;
    FILEIO;

    int queries = 1;
    while (queries--) {
        Solution solution;
    }

    return 0;
}