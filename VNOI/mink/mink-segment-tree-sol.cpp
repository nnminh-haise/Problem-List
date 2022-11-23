#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 2e9 + 7;
const int N = 1e6 + 7;

int query, n, k;
long long segment_tree[4 * 17000 + 7];

void update_tree(int index, int l, int r, int i, long long value) {
    if (i < l or r < i) return;
    if (l == r) {
        segment_tree[index] = value;
        return;
    }
    int mid = (l + r) / 2;
    update_tree(2 * index, l, mid, i, value);
    update_tree(2 * index + 1, mid + 1, r, i, value);
    segment_tree[index] = min(segment_tree[2 * index], segment_tree[2 * index + 1]);
    return;
}

int get_min(int index, int l, int r, int u, int v) {
    if (v < l or r < u) return (inf);
    if (u <= l and r <= v) return (segment_tree[index]);
    int mid = (l + r) / 2;
    return (min(get_min(2 * index, l, mid, u, v), get_min(2 * index + 1, mid + 1, r, u, v)));
}


int main() {
    fastIO
    fileInput("mink")
    cin >> query;
    while (query--) {
        cin >> n >> k;
        for (int i = 1; i <= n; ++i) {
            int x;
            cin >> x;
            update_tree(1, 1, n, i, x);
        }
        for (int i = 1; i <= n - k + 1; ++i) {
            int l = i, r = i + k - 1;
            long long result = get_min(1, 1, n, l, r);
            cout << result << " ";
        }
        cout << "\n";
        memset(segment_tree, inf, sizeof(segment_tree));
    }
}