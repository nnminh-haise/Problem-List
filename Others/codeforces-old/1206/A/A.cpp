#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int n, m;
vector < int > a, b;

int main() {
    fastIO
    fileInput("A")
    cin >> n;
    a.resize(n);
    for (int &x: a) cin >> x;
    cin >> m;
    b.resize(m);
    for (int &y: b) cin >> y;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    cout << a.back() << " " << b.back() << endl;
}