#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    FASTIO;
    #ifndef ONLINE_JUDGE
        freopen("data.txt", "r", stdin);
    #endif

    string s;
    cin >> s;

    string p = "";
    int index = 0;
    while (index < s.length() && s[index] != '@') {
        p += s[index++];
    }

    bool flag = true;
    for (int i = 0; i < p.length(); ++i) {
        if (isalnum(p[i]) == false) {
            flag = false;
        }
    }

    cout << (flag ? "True\n" : "False\n");

    return 0;
}