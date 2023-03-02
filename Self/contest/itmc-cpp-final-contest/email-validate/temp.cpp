#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    freopen("data.txt", "r", stdin);
  int n;
  cin >> n;
  unordered_set<int> a;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a.insert(x);
  }
  for (int p : a) {
    if (p % 2 == 0 && a.count(p / 2) > 0) {
      cout << p << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}