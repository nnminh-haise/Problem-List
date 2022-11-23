#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e2 + 7;

int query, n, k;
int digit[20], x[20];

void combination(int index, int n, int k) {
    if (index == k + 1) {
        for (int i = 1; i <= k; ++i) cout << x[i];
        cout << " ";
    } else {
        for (int i = 1 + index - 1; i <= n - k + index; ++i) {
            if (i > x[index - 1]) {
                x[index] = i;
                combination(index + 1, n, k);
            }
        }
    }
}

int main() {
    fastIO
    fileInput("C479257809");
    cin >> query;
    while (query--) {
        cin >> n >> k;
        if (k > n) cout << -1 << endl;
        else {
            combination(1, n, k);
            cout << endl;
        }
    }
}
