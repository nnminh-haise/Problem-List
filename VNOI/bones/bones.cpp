#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e3 + 7;

int a, b, c, counter[N], answer = 0, apperance = 0;

int main() {
    fastIO
    fileInput("bones")
    cin >> a >> b >> c;
    for (int i = 1; i <= a; ++i)
        for (int j = 1; j <= b; ++j)
            for (int k = 1; k <= c; ++k)
                counter[i + j + k]++;
    for (int i = 3; i <= a + b + c; ++i) {
        if (apperance < counter[i]) {
            apperance = counter[i];
            answer = i;
        }
    }
    cout << answer;
}
