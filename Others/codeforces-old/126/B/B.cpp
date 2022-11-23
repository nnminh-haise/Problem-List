#include <bits/stdc++.h>

using namespace std;

#define N 1001000

int lens[N], cont[N];
string s;

void Zfunction() {
    int n = s.size();
    int L = 0, R = 0;

    for (int i = 1; i < n; i++) {
        if (i > R) {
            L = R = i;

            while (R < n && s[R-L] == s[R]) {
                R++;
                cont[R-L]++;
            }
            lens[i] = R-L;
            R--;
        }
        else {
            if (lens[i-L] < R-i+1)
                lens[i] = lens[i-L];
            else {
                L = i;
                while (R < n && s[R-L] == s[R]) {
                    R++;
                    cont[R-L]++;
                }
                lens[i] = R-L;
                R--;
            }
        }
    }
}

int main() {
    freopen("B.inp", "r", stdin);
    freopen("B.out", "w", stdout);
    cin >> s;
    Zfunction();

    for (int i = 0; i < s.size(); ++i) {
        cout << i << " - " << lens[i] << ", " << cont[i] << "\n";
    }

    int siz = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (lens[i] == s.size() - i)
            if (cont[lens[i]] > 1)
                siz = max(siz, lens[i]);
    }

    if (siz == 0)
        cout << "Just a legend\n";
    else
        for (int i = 0; i < siz; i++)
            cout << s[i];
    cout << "\n";

    return 0;
}