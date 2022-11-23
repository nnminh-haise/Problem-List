#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);
#define ll long long

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int main() {
    fastIO
    fileInput("bwpoint")

    int n;
    vector <ll> black_points, white_points;
    cin >> n;
    black_points.resize(n);
    white_points.resize(n);

    for (ll &point: black_points)
        cin >> point;
    for (ll &point: white_points)
        cin >> point;

    sort(black_points.begin(), black_points.end());
    sort(white_points.begin(), white_points.end());
    int left = 0, right = 0, answer = 0;
    while (left < n and right < n) {
        if (black_points[left] < white_points[right]) {
            while (black_points[left] < white_points[right])
                left++;
            right++;
        } else {
            while (white_points[right] <= black_points[left])
                right++;
            left++;
        }
        answer++;
    }
    cout << answer << "\n";
}