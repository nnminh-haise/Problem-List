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
const int MAX_N = 1e2 + 7;
const bool QUERY = true;

ULL fib[MAX_N];

void prepare() {
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= MAX_N; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return;
}

class Solution {
    public:
        Solution() {
            ULL val;
            cin >> val;
            for (int i = 0; i <= 100; ++i) {
                if (fib[i] == val) {
                    cout << "YES\n";
                    return;
                }
            }
            cout << "NO\n";
            return;
        }
};

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("data.txt", "r", stdin);
    // #endif

    prepare();

    int queries = 1;
    if (QUERY) {
        cin >> queries;
    }
    while (queries--) {
        Solution solution;
    }

    return 0;
}