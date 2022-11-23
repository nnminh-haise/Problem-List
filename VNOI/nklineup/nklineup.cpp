#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int n, query;
int max_segment_tree[4 * 50000 + 7], min_segment_tree[4 * 50000 + 7];

void update_max_segment_tree(int index, int l, int r, int i, int value) {
    if (i < l or r < i) return;
    if (l == r) {
        max_segment_tree[index] = value;
        return;
    }
    int mid = (l + r) / 2;
    update_max_segment_tree(2 * index, l, mid, i, value);
    update_max_segment_tree(2 * index + 1, mid + 1, r, i, value);
    max_segment_tree[index] = max(max_segment_tree[2 * index], max_segment_tree[2 * index + 1]);
}

int get_max(int index, int l, int r, int u, int v) {
    if (v < l or r < u) return (-inf);
    if (u <= l and r <= v) return (max_segment_tree[index]);
    int mid = (l + r) / 2;
    return (max(get_max(2 * index, l, mid, u, v), get_max(2 * index + 1, mid + 1, r, u, v)));
}

void update_min_segment_tree(int index, int l, int r, int i, int value) {
    if (i < l or r < i) return;
    if (l == r) {
        min_segment_tree[index] = value;
        return;
    }
    int mid = (l + r) / 2;
    update_min_segment_tree(2 * index, l, mid, i, value);
    update_min_segment_tree(2 * index + 1, mid + 1, r, i, value);
    min_segment_tree[index] = min(min_segment_tree[2 * index], min_segment_tree[2 * index + 1]);
}

int get_min(int index, int l, int r, int u, int v) {
    if (v < l or r < u) return (inf);
    if (u <= l and r <= v) return (min_segment_tree[index]);
    int mid = (l + r) / 2;
    return (min(get_min(2 * index, l, mid, u, v), get_min(2 * index + 1, mid + 1, r, u, v)));
}

int main() {
    fastIO
    fileInput("nklineup")

    cin >> n >> query;
    for (int i = 1; i <= n; ++i) {
        int input_value;
        cin >> input_value;
        update_max_segment_tree(1, 1, n, i, input_value);
        update_min_segment_tree(1, 1, n, i, input_value);
    }
    while (query--) {
        int u, v;
        cin >> u >> v;
        int max_value = get_max(1, 1, n, u, v);
        int min_value = get_min(1, 1, n, u, v);
        cout << max_value - min_value << endl;
    }
}