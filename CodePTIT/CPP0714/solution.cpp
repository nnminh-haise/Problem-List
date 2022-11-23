#include <iostream>
#include <string.h>
#include <vector>
#include <map>
#include <algorithm>
#include <math.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define FI first
#define SE second

typedef long long LL;
typedef unsigned long long ULL;

using namespace std;

const int INF = 1e9 + 7;
const int MAX_N = 1e6 + 7;
const bool QUERY = true;

bool cmp(int a, int b) {
    return a > b;
}

class Solution {
    public:
        Solution() {
            int n;
            cin >> n;
            int* a = new int [n];
            for (int i = 0; i < n; ++i) {
                cin >> a[i];
            }
            int index = n - 1;

            while (index >= 0 && a[index] > a[index - 1]) {
                --index;
            }

            --index;

            int p = index + 1;
            for (int i = index + 1; i < n; ++i) {
                if (a[p] < a[i]) {
                    p = i;
                }
            }

            swap(a[p], a[index]);

            sort(a + index + 1, a + n, cmp);

            for (int i = 0; i < n; ++i) {
                cout << a[i] << (i < n - 1 ? " " : "\n");
            }

            delete[] a;
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