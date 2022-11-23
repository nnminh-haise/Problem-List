#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

#define ii pair < int, int >

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int n;
ii a[N];
int f[N];

bool condition(ii X, ii Y) {
    return (X.second < Y.second);
}

int binarySearch(int L, int R, int value) {
    int answer = 0;
    while (L <= R) {
        int mid = (L + R) / 2;
        if (a[mid].second <= value) answer = mid, L = mid + 1;
        else R = mid - 1;
    }
    return (answer);
}

int main() {
    fastIO
    fileInput("nkrez")
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int u, v;
        cin >> u >> v;
        a[i] = {u, v};
    }
    sort(a + 1, a + 1 + n, condition);
    f[1] = a[1].second - a[1].first;
    for (int i = 2; i <= n; ++i) {
        int k = binarySearch(1, i - 1, a[i].first);
        f[i] = max(f[i - 1], f[k] + a[i].second - a[i].first);
    }
    cout << f[n] << endl;
}