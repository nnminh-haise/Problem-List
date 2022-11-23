#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int query, n;
vector < int > a;

int main() {
    fastIO
    fileInput("C87702YY22")

    cin >> query;
    while (query--) {
        cin >> n;
        a.resize(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        sort(a.begin(), a.end());
        int ans = inf, result = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (ans > abs(a[i] + a[i + 1])) {
                ans = abs(a[i] + a[i + 1]);
                result = a[i] + a[i + 1];
            }
        }
        cout << result << endl;
    }

}
