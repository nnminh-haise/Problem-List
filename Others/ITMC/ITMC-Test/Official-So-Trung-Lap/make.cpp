#include <iostream>
#include <cstdlib>
#include <algorithm>    // std::shuffle
#include <array>        // std::array
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock

using namespace std;

inline int findDuplicate(vector < int >& nums) {
    int faster = nums[0];
    int slower = nums[0];

    do {
        slower = nums[slower];
        faster = nums[nums[faster]];
    } while (slower != faster);

    faster = nums[0];

    while (faster != slower){
        slower = nums[slower];
        faster = nums[faster];
    }
    return faster;
}

int main() {
    for (int i = 1; i <= 100; ++i) {
        string in = to_string(i) + ".in";
        string out = to_string(i) + ".out";

        freopen(in.c_str(), "r", stdin);
        freopen(out.c_str(), "w", stdout);

        int n;
        cin >> n;
        vector < int > a;
        for (int i = 0; i <= n; ++i) {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }

        cout << findDuplicate(a) << endl;
    }

    return 0;
}