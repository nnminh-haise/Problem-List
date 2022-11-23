#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
    return (b ? gcd(b, a % b) : a);
}

long long lcm(long long a, long long b) {
    return a * b / gcd(a, b);
}

int main() {
	int queries;
	cin >> queries;
	while (queries--) {
        long long a, b;
        cin >> a >> b;
        cout << gcd(a, b) << " " << lcm(a, b) << endl;
	}
	return 0;
}
