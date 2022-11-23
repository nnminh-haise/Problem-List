#include <iostream>
#include <math.h>

using namespace std;

unsigned long long queries = 0, n = 0, k = 0, ans = 0, a = 0, b = 0;

unsigned long long gcd(unsigned long long a, unsigned long long b) {
    return b ? gcd(b, a % b) : a;
}

unsigned long long lcm(unsigned long long a, unsigned long long b) {
    return a / gcd(a, b) * b;
}

int main() {
	cin >> queries;
	
	while (queries--) {
        cin >> n >> a >> b >> k;
        ans = 0;
        
        ans = floor(n / a) + floor(n / b) - 2 * floor(n / lcm(a, b));

        if (ans >= k) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
	}
	return 0;
}
