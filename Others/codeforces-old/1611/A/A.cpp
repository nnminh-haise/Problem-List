// TODO: Solve this problem
#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int query;

bool existEven(string f) {
    for (char x: f)
        if ((x - '0') % 2 == 0) return (true);
    return (false);
}

int main() {
    fastIO
    fileInput("A")
    cin >> query;
    while (query--) {
        string str;
        cin >> str;
        if ((str[str.length() - 1] - '0') % 2 == 0) cout << 0 << endl;
        else if ((str[0] - '0') % 2 == 0) cout << 1 << endl;
        else if (existEven(str)) cout << 2 << endl;
        else cout << -1 << endl;
    }
}