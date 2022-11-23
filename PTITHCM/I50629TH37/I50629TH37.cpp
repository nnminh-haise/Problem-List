#include <iostream>
#include <vector>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

void Try(int index, int n, int &counter, int &x, int &cnt) {
    if (index == n + 1) {
        if (counter == 0) {
            cnt++;
            cout << x << " ";
            if (cnt == 10) {
                cnt = 0;
                cout << "\n";
            }
        }
    } else {
        for (int i = index == 1 ? 1 : 0; i <= 9; ++i) {
            x = x * 10 + i;
            if (i % 2) counter++;
            else counter--;
            Try(index + 1, n, counter, x, cnt);
            x /= 10;
            if (i % 2) counter--;
            else counter++;
        }
    }
}

int main() {
    fastIO
    fileInput("I50629TH37")

    int n, counter = 0, x = 0, cnt = 0;

    cin >> n;
    Try(1, n, counter, x, cnt);
}