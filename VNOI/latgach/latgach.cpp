#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e3 + 7;

int n;
vector < int > fibo[N];

vector < int > ReverseVector(vector < int > x) {
    vector < int > result;
    for (int i = x.size() - 1; i >= 0; i--) result.push_back(x[i]);
    return (result);
}

vector < int > SplitToVector(int x) {
    vector < int > result;
    while (x != 0) result.push_back(x % 10), x /= 10;
    return (result);
}

vector < int > operator + (vector < int > a, vector < int > b) {
    vector < int > result;
    int n = a.size(), m = b.size(), k = min(n, m), d = 0;
    for (int i = 0; i < k; ++i) {
        int sum = a[i] + b[i] + d;
        result.push_back(sum % 10);
        d = sum / 10;
    }
    if (k < n) {
        for (int i = k; i < n; ++i) {
            int sum = a[i] + d;
            result.push_back(sum % 10);
            d = sum / 10;
        }
    } else {
        for (int i = k; i < m; ++i) {
            int sum = b[i] + d;
            result.push_back(sum % 10);
            d = sum / 10;
        }
    }
    if (d) result.push_back(d);
    return (result);
}

void PrintVector(vector < int > x) {
    for (int a: x) cout << a; cout << endl;
}

void prepare() {
    fibo[1] = SplitToVector(1);
    fibo[2] = SplitToVector(2);
    for (int i = 3; i <= 100; ++i) fibo[i] = fibo[i - 2] + fibo[i - 1];
}

int main() {
    fastIO
    fileInput("latgach")

    prepare();
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        PrintVector(ReverseVector(fibo[x]));
    }
}