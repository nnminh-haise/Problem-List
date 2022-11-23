#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int main() {
    fastIO
    fileInput("B")

    int n;
    vector < int > a;

    cin >> n;
    a.resize(n);
    for (int &x: a) cin >> x;

    sort(a.begin(), a.end());

    int cnt = 1;
    for (int x: a) if (x >= cnt) cnt++;
    cout << cnt - 1 << endl;
}