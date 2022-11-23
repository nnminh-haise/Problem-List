#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e2 + 7;

int query, n, cnt[N];

int main() {
    fastIO
    fileInput("C877277777")

    cin >> query;
    while (query--) {
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            int x;
            cin >> x;
            cnt[x]++;
        }
        for (int i = 0; i <= 2; ++i) {
            for (int j = 1; j <= cnt[i]; ++j) {
                cout << i << " ";
            }
        }
        cout << endl;
        cnt[0] = cnt[1] = cnt[2] = 0;
    }
}
