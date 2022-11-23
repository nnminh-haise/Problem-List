#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>    // std::shuffle
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock

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
    srand(time(NULL));
    for (int i = 1; i <= 20; ++i) {
        string in = to_string(i) + ".in";
        string out = to_string(i) + ".out";
        freopen(in.c_str(), "r", stdin);
        freopen(out.c_str(), "w", stdout);

        cout <<"\n";
    }

    return 0;
}