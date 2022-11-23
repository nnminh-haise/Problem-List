#include <iostream>
#include <math.h>

using namespace std;

int count(int n) {
    int ans = 2;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            ans += 2;
        }
    }
    if (floor(sqrt(n)) == ceil(sqrt(n))) {
        ans -= 1;
    }
    return ans;
}

int n;

int main() {
    cin >> n;
    cout << count(n) << endl;
    return 0;
}