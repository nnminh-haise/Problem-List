#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL));
    for (int i = 1; i <= 20; ++i) {
        string in = to_string(i) + ".in";
        string out = to_string(i) + ".out";
        freopen(in.c_str(), "r", stdin);
        freopen(out.c_str(), "w", stdout);
        
        int n, ans = 0;
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            if (n % i == 0) {
                ++ans;
            }
        }
        cout << ans << endl;
    }
    return 0;
}