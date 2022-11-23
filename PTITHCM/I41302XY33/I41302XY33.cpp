#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

string s;
char alphabet[] = {'0', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int main() {
    fastIO
    fileInput("I41302XY33")
    cin >> s;

    int l = 0, r = s.length() - 1, index = s.length();

    while (index >= 1 and l < s.length() and r >= 0) {
        char target = alphabet[index];
        if (s[l] == target) l++;
        else if (s[r] == target) r--;
        else {
            cout << "NO\n";
            exit(0);
        }
        index--;
    }
    cout << "YES\n";
}
