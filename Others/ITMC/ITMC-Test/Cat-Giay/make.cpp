#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main() {
    for (int i = 1; i <= 30; ++i) {
        string in = to_string(i) + ".in";
        string out = to_string(i) + ".out";
        freopen(in.c_str(), "r", stdin);
        freopen(out.c_str(), "w", stdout);
        
        int queries;
        cin >> queries;
        while (queries--) {
            int n, k;
            cin >> n >> k;
            cout << floor(n / k) * floor(n / k) << "\n";
        }
    }
    return 0;
}