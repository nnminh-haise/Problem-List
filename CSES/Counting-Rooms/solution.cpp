#include <bits/stdc++.h>

using namespace std;

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define FILEIO freopen("data.txt", "r", stdin);
#define FOR_EACH(s) for (int i = 0; i < (int)s.size(); ++i)
#define REP(i, n) for (int i = 0; i < n; ++i)
#define FOR(i, l, r) for (int i = l; i <= r; ++i)
#define REV(i, r, l) for (int i = r; i >= l; --i)
#define FI first
#define SE second

typedef long long LL;
typedef pair < int, int > II;
typedef vector < int > VI;
typedef vector < pair < int, int > > VII;

const int INF = 1e9 + 7;
const int dx[] = {0, 0, -1, 1};
const int dy[] = {-1, 1, 0, 0};

class Solution {
    public:
        bool inside(II target, const int n, const int m) {
            return (0 <= target.FI and target.FI < n and 0 <= target.SE and target.SE < m);
        }

        void BFS(II source, int** visited, const int n, const int m) {
            queue < II > q;
            q.push(source);

            while (q.empty() == false) {
                II u = q.front();
                q.pop();

                REP(k, 4) {
                    int x = u.FI + dx[k];
                    int y = u.SE + dy[k];

                    if (inside(make_pair(x, y), n, m) and visited[x][y] == false) {
                        q.push(make_pair(x, y));
                        visited[x][y] = true;
                    }
                }
            }
            return;
        }

        Solution() {
            int n, m;
            cin >> n >> m;
            char** a = new char* [n];
            int** visited = new int* [n];
            REP(i, n) {
                a[i] = new char [m];
                visited[i] = new int [m];
            }

            REP(i, n) {
                REP(j, m) {
                    cin >> a[i][j];
                    if (a[i][j] == '#') {
                        visited[i][j] = true;
                    }
                    else {
                        visited[i][j] = false;
                    }
                }
            }

            // REP(i, n) {
            //     REP(j, m) {
            //         cout << a[i][j] << " ";
            //     }
            //     cout << endl;
            // }

            int ans = 0;
            REP(i, n) {
                REP(j, m) {
                    if (visited[i][j] == false) {
                        BFS(make_pair(i, j), visited, n, m);
                        ++ans;
                    }
                }
            }
            cout << ans << endl;

            return;
        }
};

int main() {
    FASTIO;
    // FILEIO;

    int queries = 1;
    while (queries--) {
        Solution solution;
    }

    return 0;
}