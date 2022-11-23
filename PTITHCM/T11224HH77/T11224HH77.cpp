#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);

using namespace std;

int main() {
    //fileInput("T11224HH77")
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int answer = 0;
    if (a[0] > 15) cout << "15\n";
    else {
        answer += a[0];
        for (int i = 1; i < n; ++i) {
            if (a[i] - a[i - 1] <= 15) answer += a[i] - a[i - 1];
            else {
                answer += 15;
                break;
            }
        }
        cout << answer << endl;
    }
}
#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int n, answer = 0;
int a[100];

int main() {
    fastIO
    fileInput("T11224HH77")
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    if (a[1] <= 15) {
        answer += a[1];
        for (int i = 2; i <= n; ++i) {
            if (a[i] - a[i - 1] <= 15) answer += a[i] - a[i - 1];
            else {
                answer += 15;
                break;
            }
        }
        cout << answer << endl;
    } else cout << 15 << endl;
}