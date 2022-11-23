#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 2e9 + 7;
const int N = 1e6 + 7;

int query, n, k;
vector < int > a;

void process(vector < int > a, int k) {
    int minRange[N];
    deque < int > dq;
    vector < int > ans;

    while (dq.size()) dq.pop_front();

    for (int i = 1; i <= n; ++i) {
        while (dq.size() and a[dq.back()] >= a[i]) dq.pop_back();
        dq.push_back(i);
        if (dq.front() + k <= i) dq.pop_front();
        if (i >= k) minRange[i] = a[dq.front()];
    }
    for (int i = 1; i <= n - k + 1; i++) ans.push_back(minRange[n - i + 1]);
    for (int i = ans.size() - 1; i >= 0; i--) cout << ans[i] << " ";
    cout << endl;
}

int main() {
    fastIO
    fileInput("mink")
    
    cin >> query;
    while (query--) {
        cin >> n >> k;
        a.resize(n + 1);
        for (int i = 1; i <= n; ++i) cin >> a[i];
        process(a, k);
    }
}