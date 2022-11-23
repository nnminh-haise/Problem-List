#include <iostream>
#include <set>
#include <vector>

using namespace std;

const int MAX_N = 1e6 + 7;

int n;
vector < int > a;

int findDuplicate(vector < int >& nums) {
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
    cin >> n;
    for (int i = 0; i <= n; ++i) {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }

    cout << findDuplicate(a) << endl;

    return 0;
}