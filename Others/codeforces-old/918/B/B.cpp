#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int n, m;
map < string, string > db;

string get_ip(string input) {
    string result = "";
    for (char x: input) if (x != ';') result = result + x;
    return (result);
}

int main() {
    fastIO
    fileInput("B")
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        string host, ip;
        cin >> host >> ip;
        db[ip] = host;
    }
    for (int i = 1; i <= m; ++i) {
        string command, ip;
        cin >> command >> ip;
        cout << command << " " << ip << " #" << db[get_ip(ip)] << endl;
    }
}