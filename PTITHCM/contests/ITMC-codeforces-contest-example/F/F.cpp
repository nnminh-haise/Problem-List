#include <bits/stdc++.h>

#define fileInput(problemname) freopen ((string(problemname) + ".inp").c_str(), "r", stdin);freopen ((string(problemname) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int n = 1;
vector <int> x;
vector <bool> c1;
vector <bool> c2;
vector <bool> c;
char a[30][30];

bool check(int i, int j) {
    if (c[j] == false || c1[i - j + n - 1] == false || c2[i + j - 2] ==  false)
        return false;
    return true;
}

void nQueen(int i) {
    for (int j = 1; j <= n; j++)
        if (check(i, j)) {
            x[i] = j;
            c[j] = c1[i - j + n - 1] = c2[i + j - 2] = false;
            if (i == n) {
                for (int i = 1; i < x.size(); ++i) a[i][x[i]] = 'Q';
                for (int i = 1; i <= n; ++i) {
                    for (int j = 1; j <= n; ++j) {
                        cout << a[i][j] << " ";
                    }
                    cout << endl;
                }
                exit(0);
            }
            else
                nQueen(i + 1);
            c[j] = c1[i - j + n - 1] = c2[i + j - 2] = true;
        }
}

int main() {
    fastIO
    fileInput("F")

    cin >> n;
    x.resize(n + 1);
    c.resize(n + 1, true);
    c1.resize(2 * n - 1, true);
    c2.resize(2 * n - 1, true);
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            a[i][j] = '.';
    nQueen(1);
}
