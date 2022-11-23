#include<bits/stdc++.h>
using namespace std;

#define  sz(v)          (int)v.size()
#define  all(x)         (x).begin(), (x).end()
#define  mp(a,b)        make_pair(a,b)
#define  pb(x)          push_back(x)
#define  eb(x)          emplace_back(x)
#define  F             first
#define  S             second
#define  endl           '\n'
#define  fastIO         ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


typedef double db;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;

const int mxN = 1e5 + 5;
const ll MOD = 1e9 + 7;

int main() {
    fastIO;
    #ifndef ONLINE_JUDGE
    freopen("3.in", "r", stdin);
    #endif
    int n, q; cin >> n >> q;
    map<int, int> mp;
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        if (!mp[x]) mp[x] = i;
    }
    while (q--) {
        int x; cin >> x;
        cout << (mp[x] ? mp[x] : -1) << endl;
    }
    return 0;
}