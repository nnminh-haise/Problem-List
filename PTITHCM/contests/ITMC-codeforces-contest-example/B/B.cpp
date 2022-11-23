#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int query;
long long x;

vector < int > get_digits(long long X) {
    vector < int > result;
    while (X != 0) {
        result.push_back(X % 10);
        X /= 10;
    }
    return (result);
}

int main() {
    fastIO
    fileInput("B")
    cin >> query;
    while (query--) {
        cin >> x;
        vector < int > digits = get_digits(x);
        bool answer = true;
        for (int i = 1; i < digits.size(); ++i) {
            if (digits[i - 1] != digits[i]) {
                answer = false;
                break;
            }
        }
        if (answer) cout << "YES\n";
        else cout << "NO\n";
    }
}
