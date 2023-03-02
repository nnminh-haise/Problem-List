#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int count(int val) {
    int counter = 0;

    while (val > 0) {
        ++counter;
        val /= 10;
    }

    return counter;
}

int main() {
    FASTIO;
    #ifndef ONLINE_JUDGE
        freopen("data.txt", "r", stdin);
    #endif

    int n, ans = 0;
    cin >> n;
    for (int num = 1; num <= n; ++num) {
        int digit = count(num);
        if (digit % 2 == 1) {
            ++ans;
        }
    }

    cout << ans << endl;

    return 0;
}