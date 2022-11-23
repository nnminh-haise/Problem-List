#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int main() {
    FASTIO

    //freopen("data.txt", "r", stdin);

    long long a;
    cin >> a;
    for (long long b = 1; b < a; ++b) {
        long long bb = b * b;
        long long cc = 2 * a * a - bb;
        if (cc <= 0) {
            break;
        }

        // cout << "bb = " << bb << endl;
        // cout << "cc = " << cc << endl;
        long long tmp = ceil(sqrt(cc));
        if (tmp * tmp == cc) {
            long long c = sqrt(c);
            if (a != c and c != b) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}