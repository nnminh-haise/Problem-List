#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

string get_new_String(string x) {
    string res;
    for (char k: x) 
        if ('a' <= tolower(k) and tolower(k) <= 'z') res = res + char(tolower(k));
    return (res);
}

int main() {
    fastIO
    fileInput("T11324HH77")

    string input, f, g;
    getline(cin, input);

    g = f = get_new_String(input);
    reverse(g.begin(), g.end());
    if (f == g) cout << "YES\n";
    else cout << "NO\n";
}