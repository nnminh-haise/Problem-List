#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

vector <int> getDigits(long long x) {
    vector <int> digits;
    while (x > 0) {
        digits.push_back(x % 10);
        x /= 10;
    }
    reverse(digits.begin(), digits.end());
    return digits;
}

int main() {
    FASTIO

    //freopen("data.txt", "r", stdin);

    int queries;
    cin >> queries;
    while (queries--) {
        long long n;
        cin >> n;
        vector <int> digits = getDigits(n);
        int ans[3] = {0, 0, 0};
        for (int digit: digits) {
            if (digit < 5) {
                ++ans[0];
            }
            else if (digit == 5) {
                ++ans[1];
            }
            else {
                ++ans[2];
            }
        }
        cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
    }
    return 0;
}