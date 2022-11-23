#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int query;
int beauty[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 22, 33, 44, 55, 66, 77, 88, 99, 111, 222, 333, 444, 555, 666, 777, 888, 999, 1111, 2222, 3333, 4444, 5555, 6666, 7777, 8888, 9999, 11111, 22222, 33333, 44444, 55555, 66666, 77777, 88888, 99999};

int main() {
    fastIO
    fileInput("C")
    cin >> query;
    while (query--) {
        int x, answer = 0;
        cin >> x;
        for (int i = 0; i < 45; ++i) if (beauty[i] <= x) answer++;
        cout << answer << endl;
    }
}
