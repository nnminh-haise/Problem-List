#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int countPrimes(int n) {
    bool *primality = new bool [n];
    for (int p = 2; p < n; ++p) {
        primality[p] = true;
    }

    int counter = 0;
    for (int p = 2; p < n; ++p) {
        if (primality[p] == true && (long long)p * p < n) {
            for (int i = p * p; i < n; i += p) {
                primality[i] = false;
            }
        }
        if (primality[p]) ++counter;
    }

    delete[] primality;

    return counter;
}

int main() {
    FASTIO;
    #ifndef ONLINE_JUDGE
        freopen("data.txt", "r", stdin);
    #endif

    long long n;
    cin >> n;
    cout << countPrimes(n) << endl;

    return 0;
}