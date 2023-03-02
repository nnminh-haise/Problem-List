#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

bool isPalin(string s) {
    int n = s.length() - 1;
    for (int i = 0; i < n; ++i) {
        if (s[i] != s[n - i]) {
            return false;
        }
    }

    return true;
}

int main() {
    FASTIO;
    #ifndef ONLINE_JUDGE
        freopen("data.txt", "r", stdin);
    #endif

    int n;
    cin >> n;
    string* a = new string [n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int counter = 0;
    for (int i = 0; i < n; ++i) {
        if (isPalin(a[i]) == true) {
            ++counter;
        }
    }
    cout << counter << endl;

    return 0;
}