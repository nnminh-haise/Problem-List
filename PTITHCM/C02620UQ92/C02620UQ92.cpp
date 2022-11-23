#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e5 + 7;

int n, query;
int a[N];
int segment_tree[4 * N + 7];

void build(int index, int L, int R) {
    if (L == R) {
        segment_tree[index] = a[L];
        return;
    }
    int mid = (L + R) / 2;
    build(2 * index, L, mid);
    build(2 * index + 1, mid + 1, R);
    segment_tree[index] = segment_tree[2 * index] + segment_tree[2 * index + 1];
}

void update(int index, int L, int R, int position, int value) {
    if (L == R) {
        segment_tree[index] = value;
    } else {
        int mid = (L + R) / 2;
        if (position <= mid) update(2 * index, L, mid, position, value);
        else update(2 * index + 1, mid + 1, R, position, value);
        segment_tree[index] = segment_tree[2 * index] + segment_tree[2 * index + 1];
    }
}

int get_sum(int index, int L, int R, int U, int V) {
    if (U > V) return (0);
    if (L == U and R == V) return (segment_tree[index]);
    int mid = (L + R) / 2;
    return (get_sum(2 * index, L, mid, U, min(V, mid)) + get_sum(2 * index + 1, mid + 1, R, max(U, mid + 1), V));
}

int main() {
    fastIO
    fileInput("C02620UQ92")

    cin >> n >> query;

    for (int i = 1; i <= n; ++i) cin >> a[i];
    build(1, 1, n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << i << " - " << j << " : ";
            cout << get_sum(1, 1, n, i, j) << endl;
        }
    }
    /*cout << get_max(1, 1, n) << endl;
    for (int i = 0; i < query; ++i) {
        int u, v;
        cin >> u >> v;
        cout << get_max(1, 1, n) << endl;
    }*/
}
