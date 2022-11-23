#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

bool is_prime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    srand(time(NULL));
    for (int i = 1; i <= 20; ++i) {
        string in = to_string(i) + ".in";
        string out = to_string(i) + ".out";
        freopen(in.c_str(), "r", stdin);
        freopen(out.c_str(), "w", stdout);
        
        int n, ans = 0;
        cin >> n;
        cout << is_prime(n) << endl;
    }
    return 0;
}