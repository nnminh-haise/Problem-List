#include <iostream>

using namespace std;

int main() {
	int queries;
	cin >> queries;
	while (queries--) {
        long long n;
        cin >> n;
        long long ans = 1;
        long long left = 1, right = n;
        while (left <= right) {
            long long mid = (right - left + 1) / 2 + left;
	        if (mid * (mid + 1) <= 2 * n) {
                ans = max(ans, mid);
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        cout << ans << endl;
	}
	return 0;
}
