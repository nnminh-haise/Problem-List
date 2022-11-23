#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);
#define ii pair < long long, long long >
#define fi first
#define se second

using namespace std;

bool cmp(ii a, ii b) { return (a.se < b.se or a.se == b.se and a.fi > b.fi); }

int main() {
    fastIO
    fileInput("C")

    long long n, r, sum = 0, avg;
    cin >> n >> r >> avg;
    avg *= n;

    vector < ii > ls;
    ls.resize(n);
    for (ii &x: ls) cin >> x.fi >> x.se, sum += x.fi;

    sort(ls.begin(), ls.end(), cmp);

    long long ans = 0;
    int index = 0;
    while (sum < avg) {
        long long tmp = min(avg - sum, r - ls[index].fi);
        ans += tmp * ls[index].se;
        sum += tmp;
        index++;
    }
    cout << ans << "\n";
}