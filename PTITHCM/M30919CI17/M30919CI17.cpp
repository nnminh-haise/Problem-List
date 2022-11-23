#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e3 + 7;

int n;
int x[N];

void Try(int index) {
    if (index == n + 1) {
        for (int i = 1; i <= n; ++i) cout << x[i];
        cout << endl;
    } else {
        for (int i = 0; i <= 1; ++i) {
            x[index] = i;
            Try(index + 1);
        }
    }
}

int main() {
    fastIO
    fileInput("M30919CI17")

    cin >> n;

    Try(1);

}
