#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int queries;
	cin >> queries;
	while (queries--) {
        int n, k;
        cin >> n >> k;
	    cout << floor(n / k) * floor(n / k) << "\n";
	}
	return 0;
}
