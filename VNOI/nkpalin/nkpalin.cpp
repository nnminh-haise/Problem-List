#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 2e3 + 7;

string a, b;
int f[N][N];

int main() {
    fastIO
    fileInput("nkpalin")
    
    cin >> a;
    b = a;
    reverse(b.begin(), b.end());
    
    f[0][0] = 0;
    for (int i = 1; i <= a.length(); ++i) f[i][0] = 0;
    for (int j = 1; j <= b.length(); ++j) f[0][j] = 0;

    for (int i = 1; i <= a.length(); ++i) {
        for (int j = 1; j <= b.length(); ++j) {
            if (a[i - 1] == b[j - 1]) f[i][j] = f[i - 1][j - 1] + 1;
            else f[i][j] = max(f[i - 1][j], f[i][j - 1]);
        }
    }
    int i = a.length(), j = b.length();
    string answer = "";
    while (i >= 1 and j >= 1) {
        if (a[i - 1] == b[j - 1]) {
            answer = a[i - 1] + answer;
            i--;
            j--;
        } else {
            if (f[i - 1][j] == f[i][j]) i--;
            else if (f[i][j - 1] == f[i][j]) j--;
        }
    }
    cout << answer << endl;
}