
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define REP(i, n) for (int i = 0; i < n; ++i)
#define FOR(i, l, r) for (int i = l; i <= r; ++i)

typedef long long LL;

using namespace std;

int queries = 1;
vector <long long> f[10];

void backTracking(const int& n, int index, int x[], int cnt[]) {
    if (index == n) {
        long long s = 0;
        REP(i, n) {
            s *= 10;
            s += x[i];
        }
        f[n - 1].push_back(s);
        return;
    }
    FOR(i, 1, n) {
        if (cnt[i - 1]) {
            cnt[i - 1] = 0;
            x[index] = i;
            backTracking(n, index + 1, x, cnt);
            cnt[i - 1] = 1;
        }
    }
    return;
}

void prepare() {
    for (int n = 1; n <= 10; ++n) {
        int x[n];
        int cnt[n];
        REP(i, n) {
            x[i] = 0;
            cnt[i] = 1;
        }
        backTracking(n, 0, x, cnt);
    }   
    return;
}

void solution() {
    int n;
    cin >> n;
    if (f[n - 1].size() > 0) {
        for (long long item: f[n - 1]) {
            cout << item << " ";
        }
        cout << "\n";
    }
    return;
}

int main() {
    FASTIO
    #ifndef ONLINE_JUDGE
        freopen("data.txt", "r", stdin);
    #endif

    prepare();
    cin >> queries;
    while (queries--) {
        solution();
    }

    return 0;
}