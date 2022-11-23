#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

bool cmp(pair < int, int > a, pair < int, int > b) {
    return (a.first > b.first);
}

int main() {
    fastIO
    fileInput("B")

    map < int, int > db[256];

    int n, s;
    cin >> n >> s;

    for (int i = 1; i <= n; ++i) {
        char direction;
        int price, query;
        cin >> direction >> price >> query;
        db[direction][price] += query;
    }

    stack < pair < int, int > > buy, sale;

    for (pair < int, int > node : db['B']) buy.push(node);
    for (pair < int, int > node : db['S']) sale.push(node);

    for (int i = 1; i <= s; ++i) {
        if (sale.size()) {
            cout << "S " << sale.top().first << " " << sale.top().second << "\n";
            sale.pop();
        }
    }
    for (int i = 1; i <= s; ++i) {
        if (buy.size()) {
            cout << "B " << buy.top().first << " " << buy.top().second << "\n";
            buy.pop();
        }
    }
}