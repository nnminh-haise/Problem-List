/**
!: This problem can be solved using string instead of vector and integet number.
**/
#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e2 + 7;

int query;
int counter[N];

vector < int > get_digits(int X) {
    vector < int > result;
    result.clear();
    while (X != 0) {
        result.push_back(X % 10);
        X /= 10;
    }
    return (result);
}

int main() {
    fastIO
    fileInput("I220107830")
    cin >> query;
    while (query--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            int input;
            cin >> input;
            vector < int > digits = get_digits(input);
            for (int digit: digits) {
                counter[digit]++;
            }
        }
        for (int i = 0; i <= 9; ++i) if (counter[i]) cout << i << " ";
        cout << endl;
        for (int i = 0; i <= 9; ++i) counter[i] = 0;
    }
}
