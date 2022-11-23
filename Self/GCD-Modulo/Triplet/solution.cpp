#include <iostream>

using namespace std;

int main() {
    int n;
    int ans = 0;
    cin >> n;
    int* a = new int [n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if ((a[i] + a[j] + a[k]) % 5 == 0) {
                    ++ans;
                }
            }
        }
    }

    cout << ans << endl;

    delete[] a;

    return 0;
}