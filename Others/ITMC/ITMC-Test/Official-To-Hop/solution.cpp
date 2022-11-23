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

ULL f[5];
ULL ans = 0;

ULL cal(ULL n, ULL k) {
    if (k == 1) return n;
    if (k == 2) return n * (n - 1) / 2;
    return n * (n - 1) * (n - 2) / 6;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int val;
        cin >> val;
        ++f[val % 5];
    }

    ans += cal(f[0], 3);
    ans += cal(f[4], 2) * cal(f[2], 1);
    ans += cal(f[3], 2) * cal(f[4], 1);
    ans += cal(f[2], 2) * cal(f[1], 1);
    ans += cal(f[1], 2) * cal(f[3], 1);
    ans += f[0] * f[4] * f[1];
    ans += f[0] * f[2] * f[3];

    cout << ans << endl;

    return 0;
}