#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	cout << fixed << setprecision(10);
	int query;
	cin >> query;
	while (query--) {
		int n,k;
		cin >> n >> k;
		vector <int> s (n + 1, -1);
		for (int i = 0; i < n; ++i) cin >> s[i];
		sort(s.begin(), s.end());
		auto it = unique(s.begin(), s.end());
		s.resize(it - s.begin());
		for(int i = 0; i <= n; ++i) {
			if(i == n or s[i + 1] - s[i] - 1 > k) {
				cout << s[i] + 1 + k << "\n";
				break;
			}
			k -= s[i + 1] - s[i] - 1;
		}
	}
}