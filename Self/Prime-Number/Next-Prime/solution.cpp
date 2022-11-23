#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

unsigned int sieve(unsigned int n) {
    const unsigned int N = 1e6 + 7;
    unsigned int *primality = new unsigned int [N];
    
    for (int p = 2; p <= N; ++p) {
        primality[p] = true;
    }

    primality[0] = primality[1] = 0;
    for (unsigned int p = 2; p <= N; ++p) {
        if (primality[p] == true && (unsigned long long)p * p <= N) {
            for (int i = p * p; i <= N; i += p) {
                primality[i] = false;
            }
        }
    }

    for (unsigned int p = 2; p <= N; ++p) {
        if (primality[p] && p >= n) {
            return p;
        }
    }
    return -1;
}

int main() {
    FASTIO;
    #ifndef ONLINE_JUDGE
        freopen("data.txt", "r", stdin);
    #endif

    unsigned int n;
    cin >> n;
    cout << sieve(n) << endl;

    return 0;
}