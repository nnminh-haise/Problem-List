#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e6 + 7;
const long long invalid = -1e18 + 7;

/*
    Let pos[0] > pos[1] > pos[2]
*/

int updatePos(int *pos, const int &value) {
    if (value < 0)
        return 0;
    if (pos[0] < value) {
        pos[2] = pos[1];
        pos[1] = pos[0];
        pos[0] = value;
        return 1;
    }
    else if (pos[1] < value) {
        pos[2] = pos[1];
        pos[1] = value;
        return 1;
    }
    else if (pos[2] < value) {
        pos[2] = value;
        return 1;
    }
    return 0;
}

/*
    Let neg[0] < neg[1]
*/
int updateNeg(int *neg, const int &value) {
    if (value >= 0)
        return 0;
    if (neg[0] > value) {
        neg[1] = neg[0];
        neg[0] = value;
        return 1;
    }
    else if (neg[1] > value) {
        neg[1] = value;
        return 1;
    }
    return 0;
}

long long cal(int *pos, int *neg) {
    // cerr << "pos: " << pos[0] << " " << pos[1] << " " << pos[2] << endl;
    // cerr << "neg: " << neg[0] << " " << neg[1] << endl;
    long long case1 = invalid, case2 = invalid;
    if (pos[0] != -inf and pos[1] != -inf and pos[2] != -inf) {
        case1 = pos[0] * pos[1] * pos[2];
    }
    if (neg[0] != inf and neg[1] != inf and pos[0] != -inf) {
        case2 = pos[0] * neg[0] * neg[1];
    }
    // cerr << "case1: " << case1 << endl;
    // cerr << "case2: " << case2 << endl;
    if (case1 == invalid and case2 == invalid)
        return invalid;
    return max(case1, case2);
}

int main() {
    FASTIO

    freopen("data.txt", "r", stdin);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int pos[3] = {-inf, -inf, -inf};
    int neg[2] = {inf, inf};
    for (int i = 0; i < n; ++i) {
        updatePos(pos, a[i]);
        updateNeg(neg, a[i]);
        // cerr << "res = " << cal(pos, neg) << endl;
        cout << cal(pos, neg) << " ";
    }
    return 0;
}