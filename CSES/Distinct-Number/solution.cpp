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
#define _(i, n) (i < n - 1 ? " " : "\n")

typedef long long LL;
typedef pair < int, int > II;
typedef vector < int > VI;
typedef vector < pair < int, int > > VII;

const int INF = 1e9 + 7;
const int dx[] = {0, 0, -1, 1};
const int dy[] = {-1, 1, 0, 0};

class Solution {
    public:
        int countDistinctNumber(int* a, const int n) {
            set < int > f;
            REP(i, n) {
                f.insert(a[i]);
            }
            return f.size();
        }

        Solution() {
            int n;
            cin >> n;
            int* a = new int[n];
            REP(i, n)
                cin >> a[i];

            // sort(a, a + n);

            // int ans = 0;
            // for (int i = 0; i < n;) {
            //     int j = i + 1;
            //     while (a[i] == a[j])
            //         ++j;

            //     i = j;
            //     ++ans;
            // }

            // cout << ans << endl;

            cout << countDistinctNumber(a, n) << endl;
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