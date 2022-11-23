#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int n, answer = 0;
vector < int > a;

int main() {
    fastIO
    fileInput("C52619TA25")
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int x: a) {
        if (x > 10) answer += (x - 10);
    }
    cout << answer;
}