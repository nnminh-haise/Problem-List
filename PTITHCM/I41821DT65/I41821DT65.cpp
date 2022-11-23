#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 3e5 + 7;

int n, answer = 0;
long long x;
vector < long > a;

bool cmp(long A, long B) {
    return (A > B);
}

int main() {
    fastIO
    //fileInput("I41821DT65")
    cin >> n >> x;
    a.resize(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(), a.end(), cmp);
    int index = 0;
    while (index < n and x > 0) {
        answer++;
        x -= a[index];
        index++;
    }
    if (x > 0) cout << -1 << endl;
    else cout << answer << endl;
}
