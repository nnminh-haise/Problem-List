#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int query;
string key;
string input;
map < char, int > mp;

int main() {
    fastIO
    fileInput("A")
    
    cin >> query;
    while (query--) {
        cin >> key;
        cin >> input;
        for (int i = 0; i < key.length(); ++i) {
            map.insert(make_pair(key[i], i + 1));
        }
        cout << mp('a') << endl;
    }
}