#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int query;
stack < int > st;

int main() {
    fastIO
    fileInput("C12822BP02")
    
    cin >> query;
    while (query--) {
        int type;
        cin >> type;
        if (type == 1) {
            int x;w
            cin >> x;
            st.push(x);
        } else if (type == 2) {
            if (!st.empty()) st.pop();
        } else {
            if (st.empty()) cout << "Empty!\n";
            else cout << st.top() << endl;
        }
    }
}