#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    // freopen("data.txt", "r", stdin);

    int n;
    cin >> n;

    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;

    cout << count << endl;

    return 0;
}
