#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

long long sqr(long long x) {
    return x * x;
}

int main() {
    FASTIO;

    freopen("data.txt", "r", stdin);

    int queries;

    cin >> queries;
    while (queries--) {
        long long x, y;
        cin >> x >> y;

        long long d = sqr(max(x, y) - 1);
        if (x > y)
            if (x % 2 == 0)
                cout << sqr(x) - y + 1 << endl;
            else
                cout << d + y << endl;
        else
            if (y % 2 == 0)
                cout << d + x << endl;
            else
                cout << sqr(y) - x + 1 << endl;
    }

    return 0;
}
