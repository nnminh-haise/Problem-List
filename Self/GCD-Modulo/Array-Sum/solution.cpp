#include <iostream>

using namespace std;

int n, k, sum = 0;

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        int val;
        cin >> val;
        sum += val;
    }
    cout << sum % k << endl;
    return 0;
}
