#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    /* Opening a file named `data.txt` and reading it as input. */
    // freopen("data.txt", "r", stdin);

    int queries;
    cin >> queries;

    while (queries--) {
        int a, b;
        cin >> a >> b;
        cout << ((((a + b) % 3 == 0) and (min(a, b) * 2 >= max(a, b))) ? "YES" : "NO") << endl;
    }

    return 0;
}
