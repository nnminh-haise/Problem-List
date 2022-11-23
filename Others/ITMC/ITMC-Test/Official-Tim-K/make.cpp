#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>    // std::shuffle
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock

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
    srand(time(NULL));
    for (int i = 1; i <= 30; ++i) {
        string in = to_string(i) + ".in";
        string out = to_string(i) + ".out";
        freopen(in.c_str(), "r", stdin);
        freopen(out.c_str(), "w", stdout);

        cerr << "test " << i << "\n";

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
    }

    return 0;
}