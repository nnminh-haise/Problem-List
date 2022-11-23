#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    long long n;
    cin >> n;

    while (n != 1 and n > 0) {
        cout << n << " ";
        if (n % 2 == 0)
            n /= 2;
        else
            n *= 3, n += 1;
    }
    cout << 1 << endl;
    return 0;
}