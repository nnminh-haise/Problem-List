#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

vector < int > toBignum(string s) {
    vector < int > res;

    for (int i = s.length() - 1; i >= 0; --i) {
        res.push_back(s[i] - '0');
    }

    return res;
}

vector < int > toBognum(int n) {
    vector < int > res;

    while (n > 1) {
        res.push_back(n % 10);
        n /= 10;
    }

    return res;
}
    
void balance(vector < int >& a, vector < int >& b) {
    while (a.size() < b.size()) {
        a.push_back(0);
    }
    while (a.size() > b.size()) {
        b.push_back(0);
    }
    return;
}

vector < int > operator + (vector < int > a, vector < int > b) {
    vector < int > res;
    
    balance(a, b);

    int remain = 0;
    for (int i = 0; i < (int)a.size(); ++i) {
        int s = a[i] + b[i] + remain;
        res.push_back(s % 10);
        remain = s / 10;
    }

    if (remain) {
        res.push_back(remain);
    }

    return res;
}

ostream& operator<< (ostream& cout, vector < int >& target) {
    for (int i = (int)target.size() - 1; i >= 0; --i) {
        cout << target[i];
    }
    return cout;
}

int main() {
    FASTIO;
    #ifndef ONLINE_JUDGE
        freopen("data.txt", "r", stdin);
    #endif

    vector < int >* dp = new vector < int > [101];
    dp[1] = toBignum("1");
    dp[2] = toBignum("2");
    for (int i = 3; i <= 100; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    int queries;
    cin >> queries;
    while (queries--) {
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }

    return 0;
}