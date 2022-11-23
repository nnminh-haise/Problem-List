#include <iostream>
#include <cstdlib>
#include <algorithm>    // std::shuffle
#include <array>        // std::array
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock

typedef long long LL;
typedef unsigned long long ULL;

using namespace std;

ULL f[5];
ULL ans = 0;

ULL cal(ULL n, ULL k) {
    if (k == 1) return n;
    if (k == 2) return n * (n - 1) / 2;
    return n * (n - 1) * (n - 2) / 6;
}

int main() {
    for (int i = 1; i <= 100; ++i) {
        string in = to_string(i) + ".in";
        string out = to_string(i) + ".out";

        freopen(in.c_str(), "r", stdin);
        freopen(out.c_str(), "w", stdout);

        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            int val;
            cin >> val;
            ++f[val % 5];
        }

        ans += cal(f[0], 3);
        ans += cal(f[4], 2) * cal(f[2], 1);
        ans += cal(f[3], 2) * cal(f[4], 1);
        ans += cal(f[2], 2) * cal(f[1], 1);
        ans += cal(f[1], 2) * cal(f[3], 1);
        ans += f[0] * f[4] * f[1];
        ans += f[0] * f[2] * f[3];

        cout << ans << endl;
    }

    return 0;
}