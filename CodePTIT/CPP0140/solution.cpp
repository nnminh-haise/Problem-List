#include <iostream>
#include <string.h>
#include <vector>
#include <map>
#include <algorithm>
#include <math.h>
#include <climits>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define REP(i, n) for (int i = 0; i < n; ++i)
#define REV(i, r, l) for (int i = r; i >= l; --i)
#define FI first
#define SE second

typedef long long LL;
typedef unsigned long long ULL;

using namespace std;

ULL n, sum;
vector < ULL > perfect_numbers;

bool is_prime(ULL x) {
    if (x == 2 || x == 3) return true;
    if (x % 2 == 0) return false;
    for (int i = 3; i <= sqrt(x); i += 2) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

ULL pow(ULL a, ULL b) {
    if (b == 0) return 1;
    if (b == 1) return a;
    ULL tmp = pow(a, b / 2);
    if (b % 2 == 0) return tmp * tmp;
    return tmp * tmp * a;
}

void prepare() {
    for (int p = 2; p <= 31;) {
        if (is_prime(p) && is_prime(pow(2, p) - 1)) {
            perfect_numbers.push_back(pow(2, p - 1) * (pow(2, p) - 1));
        }
        ++p;
    }
    return;
}

int main() {
    FASTIO;
    #ifndef ONLINE_JUDGE
        freopen("data.txt", "r", stdin);
    #endif

    prepare();

    int q;
    cin >> q;

    while (q--) {
        cin >> n;
        bool flag = false;
        for (ULL& perfect_number: perfect_numbers) {
            if (n == perfect_number) {
                flag = true;
                break;
            }
        }
        cout << flag << endl;
    }


    return 0;
}