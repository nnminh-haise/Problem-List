#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

void ZFunction(string a, string b) {
    vector <int> z;
    string s = b + a;
    int L = 0, R = 0, n = s.length();
    z.resize(n);

    z[0] = n;
    for (int i = 1; i < n; ++i) {
        if (i > R) {
            L = R = i;
            while (R < n and s[R] == s[R - L])
                R++;
            z[i] = R - L;
            R--;
        } else {
            int k = i - L;
            if (z[k] < R - i + 1) {
                z[i] = z[k];
            } else {
                L = i;
                while (R < n and s[R] == s[R - L])
                    R++;
                z[i] = R - L;
                R--;
            }
        }
    }

    for (int i = b.length(); i < a.length() + b.length(); ++i) {
        if (z[i] >= b.length()) {
            cout << i - b.length() + 1 << " ";
        }
    }
    cout << "\n";
}

int main() {
    fastIO
    //fileInput("substr")

    string a, b;
    cin >> a >> b;
    ZFunction(a, b);
}
