#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>    // std::shuffle
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock

using namespace std;

vector < unsigned long long > res;

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
        // cout << x << "\n";
        res.push_back(x);
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

long long randInt(long long min_value, long long max_value) {
    return rand() % (max_value - min_value + 1) + min_value;
}

unsigned long long s;

int main() {
    for (int i = 3; i <= 5; ++i) {
        Try(i, 0, s);
    }

    srand(time(NULL));
    for (int i = 1; i <= 20; ++i) {
        string in = to_string(i) + ".in";
        freopen(in.c_str(), "w", stdout);

        if (i <= 1) {
            cout << "23\n";
        }
        else if (i <= 2) {
            cout << "137\n";
        }
        else if (i <= 10) {
            int flag = randInt(0, 1);
            if (flag) {
                cout << res[randInt(0, res.size() - 1)] << "\n";
            }
            else {
                cout << randInt(100, 99999) << "\n";
            }
        }
        else {
            res.clear();
            for (int i = 8; i <= 10; ++i) {
                Try(i, 0, s);
            }
            int flag = randInt(0, 1);
            if (flag) {
                cout << res[randInt(0, res.size() - 1)] << "\n";
            }
            else {
                cout << randInt(10001, 999999999) << "\n";
            }
        }
    }

    return 0;
}