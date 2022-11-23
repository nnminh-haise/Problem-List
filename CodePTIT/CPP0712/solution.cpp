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
        void backTracking(const int n, const int k, int index, int*& x) {
            if (index == k) {
                for (int i = 0; i < k; ++i) {
                    cout << x[i];
                }
                cout << " ";
                return;
            }

            for (int i = (index == 0 ? 1 : x[index - 1] + 1); i <= (index == 0 ? n - k + 1 : n); ++i) {
                x[index] = i;
                backTracking(n, k, index + 1, x);
            }
        }

        Solution() {
            int n, k;
            cin >> n >> k;
            int* x = new int [k];
            backTracking(n, k, 0, x);
            cout << "\n";
            delete[] x;
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