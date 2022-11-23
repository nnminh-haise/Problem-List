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
const int MAX_N = 2e5 + 7;
const bool QUERY = false;

class Solution {
    public:
        int n, q;
        int a[MAX_N];
        LL t[4 * MAX_N];

        void build(int a[], int v, int tl, int tr) {
            if (tl == tr) {
                t[v] = a[tl];
                return;
            }

            int tm = (tl + tr) / 2;
            build(a, 2 * v, tl, tm);
            build(a, 2 * v + 1, tm + 1, tr);
            t[v] = t[2 * v] + t[2 * v + 1];
            return;
        }

        LL sum(int v, int tl, int tr, int l, int r) {
            if (l > r) {
                return 0;
            }
            if (l == tl && r == tr) {
                return t[v];
            }
            int tm = (tl + tr) / 2;
            return sum(2 * v, tl, tm, l, min(r, tm)) +
                   sum(2 * v + 1, tm + 1, tr, max(l, tm + 1), r);
        }

        void update(int v, int tl, int tr, int pos, int new_val) {
            if (tl == tr) {
                t[v] = (LL)new_val;
                return;
            }
            int tm = (tl + tr) / 2;
            if (pos <= tm) {
                update(2 * v, tl, tm, pos, new_val);
            }
            else {
                update(2 * v + 1, tm + 1, tr, pos, new_val);
            }
            t[v] = t[2 * v] + t[2 * v + 1];
            return;
        }

        Solution() {
            cin >> n >> q;
            REP(i, n) {
                cin >> a[i];
            }

            build(a, 1, 0, n - 1);

            while (q--) {
                int type;
                cin >> type;
                if (type == 1) {
                    int pos, val;
                    cin >> pos >> val;
                    --pos;
                    update(1, 0, n - 1, pos, val);
                }
                else if (type == 2) {
                    int l, r;
                    cin >> l >> r;
                    --l;
                    --r;
                    cout << sum(1, 0, n - 1, l, r) << endl;
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