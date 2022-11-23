#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e3 + 7;

string str;
vector < pair < int, int > > counter;

bool cmp(pair < int, int > A, pair < int, int > B) {
    return (A.first > B.first);
}

int main() {
    fastIO
    fileInput("C42125YQ78")
    counter.resize(26, {0, -inf});
    cin >> str;
    for (int i = 0; i < str.length(); ++i) {
        char x = str[i];
        counter[x - 'a'].first++;
        counter[x - 'a'].second = max(counter[x - 'a'].second, i);
    }
    sort(counter.begin(), counter.end(), cmp);
    //for (char x = 'a'; x <= 'z'; ++x) cout << x << " : " << counter[x - 'a'].first << " " << counter[x - 'a'].second << endl;
    int id = 0, m = 0;
    while (counter[id].first == counter[0].first) id++;
    m = id;
    while (counter[id].first == counter[m].first) id++;
    //cout << counter[id].first << " " << counter[id].second << " - " << id << endl;
    if (id <= 26) cout << str[counter[id - 1].second] << " " << counter[id - 1].first << endl;
    else cout << -1 << endl;
}