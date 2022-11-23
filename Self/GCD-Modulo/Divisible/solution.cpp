#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int val;
        cin >> val;
        if (val % 7 == 0 && val % 13 == 0) {
            cout << "both\n";
        }
        else if (val % 7 == 0) {
            cout << "mod 7\n";
        }
        else if (val % 13 == 0) {
            cout << "mod 13\n";
        }
        else {
            cout << "none\n";
        }
    }
    return 0;
}