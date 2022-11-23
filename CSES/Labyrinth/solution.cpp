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
const char direction[] = {'L', 'R', 'U', 'D'};

template < class T >
void matrixDeclairation(T**& matrix, const int rows, const int columns);

template < class T >
void matrixIniitialization(T**& matrix, const int rows, const int columns, const T value);

template < class T >
void printMatrix(T**& matrix, const int rows, const int columns);

class Solution {
    public:
        int n, m;
        char** a;
        bool** visited;
        II** parent;
        int** depth;
        II start_node, end_node;

        int BFS(const II& start_node, const II& end_node) {
            queue < II > q;
            q.push(start_node);
            parent[start_node.FI][start_node.SE] = start_node;
            depth[start_node.FI][start_node.SE] = 0;
            visited[start_node.FI][start_node.SE] = true;

            while (q.empty() == false) {
                II u = q.front();
                q.pop();

                if (u.FI == end_node.FI and u.SE == end_node.SE) {
                    return depth[end_node.FI][end_node.SE];
                }

                REP(k, 4) {
                    II v = II(dx[k] + u.FI, dy[k] + u.SE);
                    if (0 <= v.FI and v.FI < n and 0 <= v.SE and v.SE < m and visited[v.FI][v.SE] == false and a[v.FI][v.SE] != '#') {
                        q.push(v);
                        visited[v.FI][v.SE] = true;
                        parent[v.FI][v.SE] = u;
                        depth[v.FI][v.SE] = depth[u.FI][u.SE] + 1;
                    }
                }
            }
            return -1;
        }

        string getPath(II start_node, II end_node) {
            string res = "";
            II v = end_node;
            while (!(v.FI == start_node.FI and v.SE == start_node.SE)) {
                // cerr << "[" << setw(2) << v.FI << ", " << setw(2) << v.SE << "], ";
                II u = parent[v.FI][v.SE];
                REP(k, 4) {
                    if (u.FI + dx[k] == v.FI and u.SE + dy[k] == v.SE) {
                        res = direction[k] + res;
                    }
                }
                v = u;

                if (v.FI == start_node.FI and v.SE == start_node.SE) {
                    REP(k, 4) {
                        if (u.FI + dx[k] == v.FI and u.SE + dy[k] == v.SE) {
                            res = direction[k] + res;
                        }
                    }    
                }
            }
            return res;
        }

        Solution() {
            cin >> n >> m;
            matrixDeclairation(a, n, m);
            matrixIniitialization(visited, n, m, false);
            matrixIniitialization(parent, n, m, II(-1, -1));
            matrixIniitialization(depth, n, m, 0);

            REP(i, n)
                REP(j, m) {
                    cin >> a[i][j];
                    if (a[i][j] == 'A') {
                        start_node = II(i, j);
                    }
                    else if (a[i][j] == 'B') {
                        end_node = II(i, j);
                    }
                    else if (a[i][j] == '#') {
                        visited[i][j] = true;
                    }
                }

            int res = BFS(start_node, end_node);

            // printMatrix(parent, n, m);
            if (res != -1) {
                cout << "YES\n";
                cout << res << "\n";
                string path = getPath(start_node, end_node);
                cout << path << "\n";
            }
            else {
                cout << "NO\n";
            }

            delete parent;
            delete depth;
            return;
        }
};

int main() {
    FASTIO;
    FILEIO;

    int queries = 1;
    while (queries--) {
        Solution solution;
    }

    return 0;
}

template < class T >
void matrixDeclairation(T**& matrix, const int rows, const int columns) {
    matrix = new T* [rows];
    REP(i, rows) {
        matrix[i] = new T [columns];
    }
    return;
}

template < class T >
void matrixIniitialization(T**& matrix, const int rows, const int columns, const T value) {
    matrixDeclairation(matrix, rows, columns);
    REP(i, rows)
        REP(j, columns)
            matrix[i][j] = value;
    return;
}

template < class T >
void printMatrix(T**& matrix, const int rows, const int columns) {
    REP(i, rows)
        REP(j, columns)
            cout << setw(2) << matrix[i][j] << (j < columns - 1 ? " " : "\n");
    return;
}