#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    // freopen("data.txt", "r", stdin);

    string s;
    cin >> s;
    int f[26];

    for (int i = 0; i < 26; ++i)
        f[i] = 0;

    for (char chr: s)
        ++f[chr - 'A'];

    /*
        Map 'A' = 0, 'B' = 1, ..., 'Z' = 25 -> 'A' -> 'Z' now equal to 0 -> 25.
        Let f[i] is the number of the character i in string s.
        In order to create a palindrome string p, we have to have 2 sub-string q and 1 sub-string t.
        length of q must equal to floor(|s| / 2) and length of t must equal to 1 or 0;

        Example: s = "aabbc";
        Then q = "ab", t = "c".

        Example: s = "aabb";
        then q = "ab", t = "";

        Example: s = "aabbccc";
        then q = "abc", t = "c";

        So, we can say that, there must be only one character which f[i] is odd and the rest must be even.
    */

    int count = 0;
    for (int i = 0; i < 26; ++i)
        if (f[i] > 0 and f[i] % 2 == 1)
            ++count;

    if (count > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string q, t;
    for (int i = 0; i < 26; ++i) {
        if (f[i] > 0)
            for (int j = 0; j < f[i] / 2; ++j)
                q += char(i + 'A');
        if (f[i] % 2 == 1)
            t = char(i + 'A');
    }
    string p = q;
    reverse(p.begin(), p.end());
    
    if (2 * q.length() + t.length() == s.length())
        cout << q + t + p << endl;
    else
        cout << "NO SOLUTION\n";

    return 0;
}
