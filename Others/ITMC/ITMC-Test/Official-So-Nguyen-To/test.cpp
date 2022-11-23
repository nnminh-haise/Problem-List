#include <iostream>
#include <cstdlib>

using namespace std;

int randInt(int min_value, int max_value) {
    return rand() % (max_value - min_value + 1) + min_value;
}

int main() {
    srand(time(NULL));
    for (int i = 1; i <= 20; ++i) {
        string in = to_string(i) + ".in";
        freopen(in.c_str(), "w", stdout);
        cout << randInt(1, 1000) << "\n";
    }
    return 0;
}