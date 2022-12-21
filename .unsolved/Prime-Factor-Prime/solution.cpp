// LUOGU_RID: 93950994
#pragma region head
    #include <bits/stdc++.h>
    using namespace std;
    using ll = long long;
    using vi = vector<int>;
    using vll = vector<ll>;
    using pi = pair<int, int>;
    using pll = pair<ll,ll>;
    template <class T> using vv = vector<vector<T>>;
    #define rep(i,n) for(int i = 0; i < (int)(n); i++)
    #define repi(i,a,b) for(int i = (int)(a); i < (int)(b); i++)
    #define rrep(i,n) for(int i = (int)(n)-1; i >= 0; i--)
    #define rrepi(i,a,b) for(int i = (int)(b)-1; i >= (int)(a); i--)
    const int INF = 1002003004;
    const ll LINF = 1002003004005006007ll;
    struct preprocess{preprocess()
    {cin.tie(nullptr);ios::sync_with_stdio(false);cout<<fixed<<setprecision(20);}}____;
#pragma endregion head
 
#pragma region library
struct SegmentedSieve {
  ll a,b; // inclusive
  int m;
  vector<int> f_small;
  vector<vector<ll>> f_big;
  vector<ll> prod;
  SegmentedSieve(ll a,ll b):a(a), b(b), m(ceil(sqrt(b)+0.1)+1){
    f_small.resize(m);
    f_big.resize(b-a+1);
    prod.assign(b-a+1,1);
    f_small[0] = f_small[1] = -1;
    // if(a<2) f_big[0] = *something*;
    // if(a<1) f_big[1] = *something*;
    for (ll i = 2; i < m; ++i) {
      if (f_small[i]) continue;
      f_small[i] = i;
      for (ll j = i*i; j < m; j += i) {
        if (!f_small[j]) f_small[j] = i;
      }
      for (ll j = max((a+i-1) / i, 2ll) * i; j <= b; j += i){
        ll k = j;
        do {
          if(prod[j-a] * prod[j-a] > b) break;
          f_big[j-a].emplace_back(i);
          prod[j-a] *= i;
          k /= i;
        } while (k % i == 0);
      }
    }
  }
  bool isprime_small(int x) { return f_small[x] == x;}
  bool isprime_big(ll x) { return f_big[x].empty();}
  vector<ll> factorList(ll x) {
    assert(a <= x && x <= b);
    vector<ll> res = f_big[x-a];
    x /= prod[x-a];
    if (x >= m){
      res.emplace_back(x);
      return res;
    }
    while (x != 1) {
      res.emplace_back(f_small[x]);
      x /= f_small[x];
    }
    return res;
  }
  using _pi = pair<ll,int>;
  vector<_pi> factor(ll x) {
    vector<ll> fl = factorList(x);
    if (fl.size() == 0) return {};
    vector<_pi> res(1, _pi(fl[0], 0));
    for (int p : fl) {
      if (res.back().first == p) {
        res.back().second++;
      } else {
        res.emplace_back(p, 1);
      }
    }
    return res;
  }
};
#pragma endregion library
 
int main(){
    ll a,b; cin >> a >> b;
    SegmentedSieve sv(a,b);
    int ans = 0;
    repi(i,a,b+1){
        vll v = sv.factorList(i);
        if(sv.isprime_small(v.size())) ans++;
    }
    cout << ans << '\n';
    
}

// #include <bits/stdc++.h>

// #define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

// using namespace std;

// int count(int n) {
//     int counter = 0, p = 2;
//     while (n > 1) {
//         while (n % p == 0) {
//             n /= p;
//             ++counter;
//         }
//         ++p;
//     }
//     return counter;
// }

// bool primality(int n) {
//     if (n < 2) {
//         return false;
//     }

//     if (n == 2 || n == 3) {
//         return true;
//     }

//     if (n % 2 == 0) {
//         return false;
//     }

//     for (int i = 3; i <= sqrt(n); i += 2) {
//         if (n % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     FASTIO;
//     #ifndef ONLINE_JUDGE
//         freopen("data.txt", "r", stdin);
//     #endif

//     int l, r, ans = 0;
//     cin >> l >> r;
//     for (int i = l; i <= r; ++i) {
//         if (primality(count(i))) {
//             ++ans;
//         }
//     }
//     cout << ans << endl;

//     return 0;
// }