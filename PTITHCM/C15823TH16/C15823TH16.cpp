#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

long long x;
double f;

int main() {
    fastIO
    fileInput("C15823TH16")
    cin >> x;
    f = sqrt(sqrt((sqrt(x) + pow(x,2))));
    cout << fixed << setprecision(3) << f << endl;
}