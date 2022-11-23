#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

string a, b;

vector < int > to_vector(string X) {
    vector < int > result;
    for (int i = X.length() - 1; i >= 0; --i)  result.push_back(X[i] - '0');
    return (result);
}

void show(vector < int > X) {
    for (int x: X) cout << x;
    cout << endl;
}

void show_reverse(vector < int > X) {
    for (int i = X.size() - 1; i >= 0; --i) cout << X[i];
    cout << endl;
}

string optimize(string X) {
    string result = "";
    int index = 0;
    while (X[index] == '0' and index < X.length()) index++;
    if (index == X.length()) return ("0");
    for (int i = index; i < X.length(); ++i) result = result + X[i];
    return (result);
}

vector < int > sum_two_vector(vector < int > A, vector < int > B) {
    vector < int > result;
    int n = min(A.size(), B.size()), d = 0;
    for (int i = 0; i < n; ++i) {
        int total = A[i] + B[i] + d;
        result.push_back(total % 10);
        d = total / 10;
    }
    if (A.size() < B.size()) {
        for (int i = n; i < B. size(); ++i) {
            int total = B[i] + d;
            result.push_back(total % 10);
            d = total / 10;
        }
    } else {
        for (int i = n; i < A. size(); ++i) {
            int total = A[i] + d;
            result.push_back(total % 10);
            d = total / 10;
        }
    }
    if (d) result.push_back(d);
    return (result);
}

int main() {
    fastIO
    fileInput("C52620LQ89")
    cin >> a >> b;
    show(to_vector(optimize(a)));
    show(to_vector(optimize(b)));
    show_reverse(sum_two_vector(to_vector(optimize(a)), to_vector(optimize(b))));
}
