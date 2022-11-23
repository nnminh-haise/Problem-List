#include <bits/stdc++.h>

using namespace std;

int n, m, cnt = 0;

int main() {
    srand(time(NULL));
    freopen ("C1826YN33.inp", "w", stdout);
    //n = rand() % 10001;
    //m = rand() % 10001;
    n = 100;
    m = 100;
    cout << n << " " << m << endl;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cerr << "Running test " << ++cnt << "...\n";
            int data = rand() % 2;
            cout << data << " ";
        }
        cout << endl;
    }
    cerr << "Finished\n";
}
