#include <iostream>

using namespace std;

int main() {
	int queries;
	cin >> queries;
	while (queries--) {
        int n, x;
        cin >> n >> x;
	    int ans = n * x / 4 + ((n * x) % 4 > 0 ? 1 : 0);
        cout << ans << endl;
	}
	return 0;
}
