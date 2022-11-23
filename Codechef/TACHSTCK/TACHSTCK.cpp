#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int main() {
    fastIO
    fileInput("TACHSTCK")

    int n, d;
    vector <int> a;
    cin >> n >> d;
    a.resize(n);
    for (int &x: a) cin >> x;

    sort(a.begin(), a.end());
    int cnt = 0;
    for (int i = 0; i < n - 1;) {
        if (a[i] >= a[i + 1] - d) {
            cnt++;
            i += 2;
        } else {
            i++;
        }
    }
    cout << cnt << "\n";
}