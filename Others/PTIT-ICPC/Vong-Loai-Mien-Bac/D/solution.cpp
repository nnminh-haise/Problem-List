#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define FILEIO freopen("data.txt", "r", stdin);
#define FOR_EACH(s) for (int i = 0; i < (int)s.size(); ++i)
#define REP(i, n) for (int i = 0; i < n; ++i)
#define FOR(i, l, r) for (int i = l; i <= r; ++i)
#define REV(i, r, l) for (int i = r; i >= l; --i)
#define FI first
#define SE second

typedef long long LL;
typedef pair < int, int > II;
typedef vector < int > VI;
typedef vector < pair < int, int > > VII;

const int INF = 1e9 + 7;
const int dx[] = {0, 0, -1, 1};
const int dy[] = {-1, 1, 0, 0};

class Solution {
    public:
        map < int, char > mp;

        bool isValid(string s) {
            stack < char > st;
            for (char chr: s) {
                if (chr == '(' or chr == '[' or chr == '{' or chr == '<') {
                    st.push(chr);
                }
                else {
                    if (chr == ')' and st.empty() == false and st.top() == '(') {
                        st.pop();
                    }
                    else if (chr == ']' and st.empty() == false and st.top() == '[') {
                        st.pop();
                    }
                    else if (chr == '}' and st.empty() == false and st.top() == '{') {
                        st.pop();
                    }
                    else if (chr == '>' and st.empty() == false and st.top() == '<') {
                        st.pop();
                    }
                    else {
                        return false;
                    }
                }
            }
            if (st.empty() == false) {
                return false;
            }
            return true;
        }

        void backTracking(int index, const int n, int* x, string s, int& ans) {
            if (index == n) {
                int id = 0;
                string p = "";
                for (char chr: s) {
                    if (chr != '?') {
                        p += chr;
                    }
                    else {
                        p += mp[x[id++]];
                    }
                }
                // cout << "p = " << p << " - " << isValid(p) << endl;
                ans += isValid(p);
            }
            else {
                REP(i, 8) {
                    x[index] = i;
                    backTracking(index + 1, n, x, s, ans);
                }
            }
        }

        Solution() {
            mp[0] = '(';
            mp[1] = '[';
            mp[2] = '{';
            mp[3] = '<';
            mp[4] = ')';
            mp[5] = ']';
            mp[6] = '}';
            mp[7] = '>';

            string s;
            cin >> s;

            int n = 0;
            for (char chr: s) {
                if (chr == '?') {
                    ++n;
                }
            }

            int* x = new int [n];
            int ans = 0;
            backTracking(0, n, x, s, ans);
            cout << ans << endl;

            return;
        }
};

int main() {
    FASTIO;
    FILEIO;

    int queries = 1;
    while (queries--) {
        Solution solution;
    }

    return 0;
}