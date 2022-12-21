#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

long long gcd(long long a, long long b) {
    return (b ? gcd(b, a % b) : a);
}

int main() {
    FASTIO;
    #ifndef ONLINE_JUDGE
        freopen("data.txt", "r", stdin);
    #endif

    int n;
    cin >> n;
    int *a = new int [n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int p = 2;
    while (true) {
        bool flag = true;
        for (int i = 0; i < n; ++i) {
            if (gcd(a[i], p) == 1) {
                flag = false;
            }
        }
        if (flag) {
            break;
        }
        ++p;
    }
    cout << p << endl;

    return 0;
}