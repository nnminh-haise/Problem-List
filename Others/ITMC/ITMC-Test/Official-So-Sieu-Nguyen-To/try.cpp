#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>    // std::shuffle
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock

using namespace std;

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

void Try(const int n, int index, unsigned long long& x) {
    if (n == index) {
        cout << x << "\n";
        return;
    }
    for (int i = 1; i <= 9; ++i) {
        x += binaryPower(10, index) * i;
        if (is_prime(x)) {
            Try(n, index + 1, x);
        }
        x -= binaryPower(10, index) * i;
    }
}

int main() {
    freopen("data.txt", "w", stdout);
    for (int i = 2; i <= 10; ++i) {
        unsigned long long x = 0;
        Try(n, 0, x);
    }
    return 0;
}