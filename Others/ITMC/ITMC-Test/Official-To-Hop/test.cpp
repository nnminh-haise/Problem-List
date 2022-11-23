#include <iostream>
#include <cstdlib>

using namespace std;

int randInt(int min_value, int max_value) {
    return rand() % (max_value - min_value + 1) + min_value;
}

int main() {
    srand(time(NULL));
    for (int i = 1; i <= 100; ++i) {
        string in = to_string(i) + ".in";
        freopen(in.c_str(), "w", stdout);
        
        int n = randInt(1, 100);
        cout << n << endl;
        for (int i = 1; i <= n; ++i) {
            cout << randInt(1, 100) << (i < n ? " ": "\n");
        }
    }
    return 0;
}