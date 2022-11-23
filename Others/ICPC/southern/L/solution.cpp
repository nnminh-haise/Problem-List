#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    FASTIO;
    #ifndef ONLINE_JUDGE
        freopen("data.txt", "r", stdin);
    #endif

    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }

        string x, y, z;
        int cnt = 0;
        cin >> x >> y >> z;
        int d = 0;
        for (int i = n - 1; i >= 0; --i) {
            int a = x[i] - '0';
            int b = y[i] - '0';
            int c = z[i] - '0';
            cout << "bug: " << (a + b + d) % 10 << " " << c << endl;
            if ((a + b + d) % 10 == c) {
                ++cnt;
                d = (a + b + d) / 10;
            }
            cout << "d = " << d << endl;
        }
        cout << n - cnt << endl;
        return 0;
    }

    return 0;
}