//  TODO: finish this problem
#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

bool is_pivot(deque < int > &f, int value, int n) {
    if (n % 2 == 0) return (f[n / 2 - 1] == value);
    return (f[n / 2] == value);
}

int main() {
    fastIO
    fileInput("C")
    
    int n, k;
    deque < int > a;

    cin >> n >> k;
    a.resize(n);
    
    for (int &x: a) cin >> x;
    
    sort(a.begin(), a.end());

    int pivot = find(a.begin(), a.end(), k) - a.begin();

    for (int x: a) cout << x << " ";
    cout << "\n";
    cout << pivot << "\n";

    int l = pivot, r = n - 1 - pivot;
    cout << "l: " << l << "\n" << "r: " << r << "\n";

    if (is_pivot(a, k, a.size())) cout << "founded\n";
    else cout << "not found\n";
}