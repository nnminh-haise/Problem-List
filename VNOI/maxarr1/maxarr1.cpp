#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e5 + 7;

int query;
int sequence[N], max_number[N];

void prepare() {
    sequence[0] = 0;
    sequence[1] = 1;
    max_number[0] = 0;
    max_number[1] = 1;
    for (int i = 2; i <= 100000; ++i) {
        if (i % 2 == 0) {
            sequence[i] = sequence[i / 2];
        } else {
            sequence[i] = sequence[i / 2] + sequence[i / 2 + 1];
        }
        max_number[i] = max(max_number[i - 1], sequence[i]);
    }
}

int main() {
    fastIO
    fileInput("maxarr1")
    prepare();
    // for (int i = 0; i <= 100000; ++i) {
    //     cout << sequence[i] << " - " << max_number[i] << endl;
    // }
    cin >> query;
    while (query--) {
        int n;
        cin >> n;
        cout << max_number[n] << endl;
    }
}