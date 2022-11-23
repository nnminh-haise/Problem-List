//  !Not done yet
#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

bool isSymbol(char x) {
    return (x == '+' or x == '-' or x == '*' or x == '/' or x == '^');
}

vector < char > sortSymbol(vector < char > x) {
    vector < char > result;
    for (char y: x) if (y == '^') result.push_back(y);
    for (char y: x) if (y == '*' or y == '/') result.push_back(y);
    for (char y: x) if (y == '+' or y == '-') result.push_back(y);
    return (result);
}

string toRPN(string str) {
    stack < int > level;
    stack < pair < char, int > > symbol;
    int levelCounter = 0;
    string result = "";

    for (char x: str) {
        if (x == '(') {
            levelCounter++;
            level.push(levelCounter);
        }
        if ('a' <= x and x <= 'z') result = result + x;
        if (isSymbol(x)) symbol.push(make_pair(x, levelCounter));
        if (x == ')') {
            if (!symbol.empty()) {
                vector < char > symbols;
                while (!symbol.empty() and symbol.top().second == level.top()) {
                    symbols.push_back(symbol.top().first);
                    symbol.pop();
                }
                symbols = sortSymbol(symbols);
                for (char x: symbols) result = result + x;
                if (!level.empty()) level.pop();
                levelCounter--;
            }
        }
    }
    if (!symbol.empty()) {
        vector < char > symbols;
        while (!symbol.empty()) {
            symbols.push_back(symbol.top().first);
            symbol.pop();
        }
        symbols = sortSymbol(symbols);
        for (char x: symbols) result = result + x;
    }
    return (result);
}

int main() {
    fastIO
    fileInput("C12822BP07")
    int query;
    cin >> query;
    while (query--) {
        string str;
        cin >> str;
        string result = toRPN(str);
        cout << result << endl;
    }
}