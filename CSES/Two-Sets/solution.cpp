#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define LL long long

using namespace std;

int main() {
    FASTIO;

    // freopen("data.txt", "r", stdin);

    int n;
    cin >> n;
    if (n * (n + 1) / 2 % 2 != 0) {
        cout << "NO\n";
        return 0;
    }

    vector < int > a, b;
    long long half_sum = (LL)n * ((LL)n + 1) / 4;

    for (int i = n; i > 0; --i) {
        if (half_sum >= i) {
            half_sum -= i;
            a.push_back(i);
        }
        else {
            b.push_back(i);
        }
    }

    cout << "YES\n";
    cout << a.size() << endl;
    for (int item: a)
        cout << item << " ";
    cout << endl;

    cout << b.size() << endl;
    for (int item: b)
        cout << item << " ";
    cout << endl;

    return 0;
}
