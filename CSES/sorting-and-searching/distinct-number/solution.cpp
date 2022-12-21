#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int* a = new int [n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a, a + n);

    int ans = 0;
    for (int i = 0; i < n; ++ans) {
        int j = i + 1;
        while (a[i] == a[j]) {
            ++j;
        }
        i = j;
    }
    cout << ans << endl;
    return 0;
}