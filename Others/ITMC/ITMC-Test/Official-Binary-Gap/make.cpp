#include <iostream>
#include <cstdlib>

using namespace std;

string toBinary(int n) {
    if (n == 0) {
        return "0";
    }
    string res = "";
    while (n > 0) {
        res = (char)(n % 2 + '0') + res;
        n /= 2;
    }
    return res;
}

int main() {
    for (int qq = 1; qq <= 30; ++qq) {
        string in = to_string(qq) + ".in";
        string out = to_string(qq) + ".out";
        freopen(in.c_str(), "r", stdin);
        freopen(out.c_str(), "w", stdout);

        int n;
        cin >> n;

        string s = toBinary(n);

        int i = 0, ans = 0;
        while (i < s.length()) {
            while (i < s.length() && s[i] == '0') {
                ++i;
            }
            int j = i + 1;
            while (j < s.length() && s[j] == '0') {
                ++j;
            }
            if (j < s.length())
                ans = max(ans, j - i - 1);
            i = j;
        }
        cout << ans << "\n";
    }
    return 0;
}