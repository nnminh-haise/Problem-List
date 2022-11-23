#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int n;
vector < int > notnegative, negative;
long long answer;

int main() {
    fastIO
    fileInput("I42630TA61")

    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x < 0) negative.push_back(x);
        else notnegative.push_back(x);
    }
    sort(negative.begin(), negative.end());
    sort(notnegative.begin(), notnegative.end());
    for (int x: negative) cout << x << " "; cout << endl;
    for (int x: notnegative) cout << x << " "; cout << endl;
    int d = negative.size(), e = notnegative.size();
    if (notnegative.size() == 0) cout << negative[d - 1] * negative[d - 2] * negative[d - 3] << endl;
    else if (negative.size() == 0) cout << notnegative[e - 1] * notnegative[e - 2] * notnegative[e - 3] << endl;
    else {
        answer = max(notnegative[e - 1] * notnegative[e - 2] * notnegative[e - 3], notnegative[e - 1] * negative[0] * negative[1]);
        cout << answer << endl;
    }

}
