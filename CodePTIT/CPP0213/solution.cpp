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

LL fib[107];

void prepare() {
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= 25; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return;
}

class Solution {
    public:
        bool isFibonacci(int val) {
            for (int i = 0; i <= 25; ++i) {
                if (fib[i] == val) {
                    return true;
                }
            }
            return false;
        }

        Solution() {
            int n;
            cin >> n;
            int* a = new int [n];
            REP(i, n) {
                cin >> a[i];
            }

            vector < int > ans;
            REP(i, n) {
                if (isFibonacci(a[i])) {
                    ans.push_back(a[i]);
                }
            }
            for (int item: ans) {
                cout << item << " ";
            }
            cout << "\n"l
            delete a;
            return;
        }
};

int main() {
    #ifndef ONLINE_JUDGE
        freopen("data.txt", "r", stdin);
    #endif

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