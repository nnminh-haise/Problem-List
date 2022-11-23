#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    for (int i = 1; i <= 30; ++i) {
        string in = to_string(i) + ".in";
        string out = to_string(i) + ".out";
        freopen(in.c_str(), "r", stdin);
        freopen(out.c_str(), "w", stdout);

        int queries;
        cin >> queries;
        while (queries--) {
            int n, x;
            cin >> n >> x;
            int ans = n * x / 4 + ((n * x) % 4 > 0 ? 1 : 0);
            cout << ans << endl;
        }
    }

    return 0;
}