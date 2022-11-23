#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int query;
string str;
stack < int > st;

int getWeight(char X) {
    if (X == 'C') return (12);
    else if (X == 'H') return (1);
    return (16);
}

int main() {
    fastIO
    fileInput("C12822BP18")
    cin >> query;
    while (query--) {
        cin >> str;
        while (!st.empty()) st.pop();
        for (char x: str) {
            if (x == 'C' or x == 'H' or x == 'O') st.push(getWeight(x));
            else if (x == '(') st.push(0);
            else if (x == ')') {
                int sum = 0;
                while (st.top() != 0) {
                    sum += st.top();
                    st.pop();
                }
                st.pop();
                st.push(sum);
            } else if ('2' <= x and x <= '9') {
                int sum = st.top() * (x - '0');
                st.pop();
                st.push(sum);
            }
        }
        int sum = 0;
        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }
        cout << sum << endl;
    }
}