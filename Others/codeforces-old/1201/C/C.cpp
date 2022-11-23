#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 2e9;
const int N = 1e6 + 7;

bool check(long long x, vector < int > &a, int n, int k) {
    int cnt = 0;
    for (int i = n / 2; i < n; ++i) {
        if (x - a[i] > 0) cnt += x - a[i];
        if (cnt > k) return (false);
    }
    if (cnt <= k) return (true);
    else return (false);
}

int main() {
    fastIO
    fileInput("C")

    int n, k;
    cin >> n >> k;
    vector < int > a;
    a.resize(n);
    for (int &x: a) cin >> x;

    sort(a.begin(), a.end());

    long long l = 1, r = inf;

    while (l != r) {
        int mid = (l + r + 1) / 2;
        if (check(mid, a, n, k)) l = mid;
        else r = mid - 1;
    }

    cout << l << endl;
}