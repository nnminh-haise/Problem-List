#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int query;
vector < long long > beauties;

long long power(long long a, long long b) {
    if (b == 0) return (1);
    if (b == 1) return (a);
    long long result = power(a, b / 2);
    if (b % 2) return (result * result * a);
    return (result * result);
}

void make_beauty_number() {
    for (int i = 1; i <= 18; ++i) {
        long long num;
        for (long long k = 1; k <= 9; ++k) {
            num = 0;
            for (int rep = i; rep >= 1; rep--) num += power(10, rep - 1) * k;
            beauties.push_back(num);
        }
    }
}

int main() {
    fastIO
    fileInput("D")
    make_beauty_number();

    cin >> query;
    while (query--) {
        long long x, answer = 0;
        cin >> x;
        for (long long beauty: beauties) if (beauty <= x) answer++;
        cout << answer << endl;
    }
}
