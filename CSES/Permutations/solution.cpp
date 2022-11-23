#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    //freopen("data.txt", "r", stdin);

    int n;
    cin >> n;
    if (n == 1) {
        cout << 1 << endl;
    }
    else if (n <= 3) {
        cout << "NO SOLUTION\n";
    }
    else if (n == 4) {
        cout << "2 4 1 3\n";
    }
    else {
        for (int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
        for (int i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
