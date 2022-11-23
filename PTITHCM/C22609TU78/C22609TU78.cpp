#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int n;
long long a, b, A, B, result = 0;

long long power(long long a, long long b) {
    if (b == 0) return (1);
    if (b == 1) return (a);
    long long result = power(a, b / 2);
    if (b % 2) return (result * result * a);
    return (result * result);
}

vector < long long > get_digits(long long X) {
    vector < long long > result;
    while (X != 0) {
        result.push_back(X % 10);
        X /= 10;
    }
    return (result);
}

long long to_decimal(vector < long long > digits) {
    long long result = 0;
    for (int i = 0; i < digits.size(); ++i) {
        result += (digits[i] * power(n, i));
    }
    return (result);
}

int main() {
    fastIO
    fileInput("C22609TU78")

    cin >> n;
    cin >> a >> b;
    A = to_decimal(get_digits(a));
    B = to_decimal(get_digits(b));
    result = A * B;
    cout << result << endl;
}
