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
        Solution() {
            int n;
            cin >> n;
            int* a = new int [n];
            REP(i, n) {
                cin >> a[i];
            }
            int l, r;
            cin >> l >> r;
            bool flag = false;
            for (int mid = l; mid <= r; ++mid) {
                bool checker1 = true, checker2 = true;
                for (int i = l; i < mid; ++i) {
                    if (a[i] > a[i + 1]) {
                        checker1 = false;
                    }
                }
                for (int j = mid; j > r; --j) {
                    if (a[j] < a[j + 1]) {
                        checker2 = false;
                    }
                }
                if (checker1 && checker2) {
                    flag = true;
                }
            }

            if (flag) {
                cout << "Yes\n";
            }
            else {
                cout << "No\n";
            }
            delete a;
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