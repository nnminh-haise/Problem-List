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
            t[v] = 0;
            return;
        }

        LL get(int v, int tl, int tr, int pos) {
            if (tl == tr) {
                return t[v];
            }
            int tm = (tl + tr) / 2;
            if (pos <= tm) {
                return get(2 * v, tl, tm, pos) + t[v];
            }
            return get(2 * v + 1, tm + 1, tr, pos) + t[v];
        }

        void update(int v, int tl, int tr, int l, int r, int val) {
            if (l > r) {
                return;
            }
            if (l == tl && r == tr) {
                t[v] += val;
                return;
            }
            int tm = (tl + tr) / 2;
            update(2 * v, tl, tm, l, min(r, tm), val);
            update(2 * v + 1, tm + 1, tr, max(l, tm + 1), r, val);
            return;
        }

        Solution() {
            cin >> n >> q;
            for (int i = 0; i < n; ++i) {
                cin >> a[i];
            }

            build(a, 1, 0, n - 1);

            while (q--) {
                int type;
                cin >> type;
                if (type == 1) {
                    int l, r, val;
                    cin >> l >> r >> val;
                    --l;
                    --r;
                    update(1, 0, n - 1, l, r, val);
                }
                else {
                    int pos;
                    cin >> pos;
                    --pos;
                    cout << get(1, 0, n - 1, pos) << endl;
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