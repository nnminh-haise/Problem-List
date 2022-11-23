#include <iostream>
#include <string.h>
#include <vector>
#include <map>
#include <algorithm>
#include <math.h>
#include <fstream>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define REP(i, n) for (int i = 0; i < n; ++i)
#define REV(i, r, l) for (int i = r; i >= l; --i)
#define FI first
#define SE second

typedef long long LL;
typedef unsigned long long ULL;

using namespace std;

// const int INF = 1e9 + 7;
// const int MAX_N = 1e6 + 7;
// const bool QUERY = false;

// class Solution {
//     public:
//         Solution() {

//             return;
//         }
// };

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("data.txt", "r", stdin);
    // #endif

    // int queries = 1;
    // if (QUERY) {
    //     cin >> queries;
    // }
    // while (queries--) {
    //     Solution solution;
    // }

    ifstream in("PTIT.in");
    ofstream out("PTIT.out");

    while (true) {
        if (!in.eof()) {
            string s;
            getline(in, s);
            out << s << "\n";
        }
        else {
            break;
        }
    }

    in.close();
    out.close();


    return 0;
}