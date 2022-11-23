#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

unsigned long long n;

bool is_prime(unsigned long long n) {
    if (n < 2) {
        return false;
    }
    if (n == 2 || n == 3) {
        return true;
    } 
    if (n % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

unsigned long long binaryPower(unsigned long long a, unsigned long long b) {
    if (b == 0) {
        return 1;
    }
    if (b == 1) {
        return a;
    }
    unsigned long long tmp = binaryPower(a, b / 2);
    if (b % 2 == 0) {
        return tmp * tmp;
    }
    return tmp * tmp * a;
}

int main() {
    FASTIO;
    #ifndef ONLINE_JUDGE
        freopen("data.txt", "r", stdin);
    #endif

    cin >> n;
    while (n > 0) {
        if (!is_prime(n)) {
            cout << "False\n";
            return 0;
        }
        int cnt = 0;
        unsigned long long tmp = n;
        n = 0;
        while (tmp > 9) {
            n += binaryPower(10, cnt) * (tmp % 10);
            ++cnt;
            tmp /= 10;
        }
    }
    cout << "True\n";


    return 0;
}