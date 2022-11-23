#include <bits/stdc++.h>

using namespace std;

int query, n, k;
stack < pair < int, int > > st;

int main() {
    freopen ("mink.inp", "r", stdin);
    freopen ("mink.out", "w", stdout);
    cin >> query;
    while (query--) {
        cin >> n >> k;
        for (int i = 1; i <= n; ++i) {
            int x;
            cin >> x;
            if (i == 1) st.push(make_pair(x, x));
            else {
                int new_min = min(x, st.top().second);
                st.push(make_pair(x, new_min));
            }
            if (st.size() == k) {
                cout << st.top().second() << " ";
            }
        }
    }
}