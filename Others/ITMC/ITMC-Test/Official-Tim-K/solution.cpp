#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const unsigned long long INF = 1e9 + 7;

int n, q, k;
vector < pair < int, int > > a;

bool cmp(pair < int, int > a, pair < int, int > b) {
    return ((a.first < b.first) || (a.first == b.first && a.second < b.second));
}

int search(vector < pair < int, int > >& a, int l, int r, int val) {
    int ans = INF;
    while (l <= r) {
        int mid = (r - l) / 2 + l;
        if (a[mid].first < val) {
            l = mid + 1;
        }
        else {
            if (a[mid].first == val) {
                ans = min(ans, a[mid].second);
            }
            r = mid - 1;
        }
    }
    return ans;
}

int main() {
    // freopen("2.in", "r", stdin);
    cin >> n >> q;
    a.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end(), cmp);

    while (q--) {
        cin >> k;
        int p = search(a, 0, n - 1, k);
        if (p != INF) {
            cout << p << "\n";
        }
        else {
            cout << -1 << "\n";
        }
    }

    a.clear();

    return 0;
}