#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

const int MOD = 1e9 + 7;

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}


int main() {
    FASTIO;

    // freopen("data.txt", "r", stdin);

    int n;
    cin >> n;

    cout << binpow(2, n, MOD) << endl;

    return 0;
}
