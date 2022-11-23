#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int main() {
    fastIO
    fileInput("D")

    int n, x, y, cntx = 0, cnty = 0;
    vector < string > res;
    
    cin >> n >> x >> y;

    while (cntx < x and cnty < y) {
        if (((long long)cntx + 1) * y > (long long)(cnty + 1) * x) {
            res.push_back("Vova");
            cnty++;
        }
        if ((long long)(cntx + 1) * y < (long long)(cnty + 1) * x) {
            res.push_back("Vanya");
            cntx++;
        }
        if ((long long)(cntx + 1) * y == (long long)(cnty + 1) * x) {
            res.push_back("Both");
            res.push_back("Both");
            cntx++;
            cnty++;
        }
    }

    for (int i = 1; i <= n; ++i) {
        int a;
        cin >> a;
        cout << res[(a - 1) % (x + y)] << "\n";
    }
}