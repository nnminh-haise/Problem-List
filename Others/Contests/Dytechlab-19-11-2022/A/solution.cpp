#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    FASTIO;
    #ifndef ONLINE_JUDGE
        freopen("data.txt", "r", stdin);
    #endif

    int queries;
    cin >> queries;

    while (queries--) {
        int n;
        long long s = 0;
        cin >> n;
        int* a = new int [n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int j = 0, i = 0;
        while (true) {
            if (a[i] < ceil((j + 1) / 2)) {
                break;
            }
            else {
                a[i] -= ceil((j + 1) / 2);
                if (i == n - 1) {
                    i = 0;
                }
                else {
                    i += 1;
                }
                a[i] += ceil((j + 1) / 2);
            }
            ++j;
        }
        cout << i << endl;
    }

    return 0;
}