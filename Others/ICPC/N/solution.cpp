#include <iostream>
#include <string.h>
#include <vector>
#include <map>
#include <algorithm>
#include <math.h>
#include <iomanip>

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

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("data.txt", "r", stdin);
    // #endif

    int queries;
    cin >> queries;
    while (queries--) {
        int n;
        cin >> n;
        double res = 1e9 / (1.0 * (n + 1));
        cout << fixed << setprecision(9) << res << endl;
    }

    return 0;
}