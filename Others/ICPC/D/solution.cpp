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
const int MAX_N = 1e5 + 7;
const bool QUERY = false;

int n, q;
int a[MAX_N];
int t[MAX_N * 4];

void build(int a[], int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = tl;
        return;
    }
    int tm = (tl + tr) / 2;
    build(a, 2 * v, tl, tm);
    build(a, 2 * v + 1, tm + 1, tr);
    int lv = t[2 * v];
    int rv = t[2 * v + 1];
    t[v] = (rv - lv) / 2 + lv;
    return;
}

int getMedian(int v, int tl, int tr, int l, int r) {
    if (l > r) {
        return 0;
    }
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    int lv = getMedian(2 * v, tl, tm, l, min(r, tm));
    int rv = getMedian(2 * v + 1, tm + 1, tr, max(l, tm + 1), r);
    return (rv - lv) / 2 + lv;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("data.txt", "r", stdin);
    #endif

    cin >> n >> q;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    build(a, 0, 0, n - 1);
    
    while (q--) {
        int u, v;
        cin >> u >> v;
        cout << a[getMedian(0, 0, n - 1, u, v)] << "\n";
    }


    return 0;
}