#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

struct Data {
    int loss;
    int index;
    
    Data(int _loss = 0, int _index = -1) {
        loss = _loss;
        index = _index;
        return;
    }
};

bool cmp(Data a, Data b) {
    return (a.loss > b.loss);
}

int main() {
    freopen("data.txt", "r", stdin);
	int n, x, y;
	cin >> n >> x >> y;
	int a[n], b[n];
	for (int i = 0; i < n; ++i) {
        cin >> a[i];
	}
	for (int i = 0; i < n; ++i) {
        cin >> b[i];
	}
	Data c[n];
	for (int i = 0; i < n; ++i) {
        c[i] = Data(abs(a[i] - b[i]), i);
	}
	sort(c, c + n, cmp);
	int ans = 0;
	
	for (int i = 0; i < n; ++i) {
        int val_a = a[c[i].index];
        int val_b = b[c[i].index];
        if (x > 0 && y > 0) {
            if (val_a > val_b) {
                --x;
                ans += val_a;
            }
            else if (val_a < val_b) {
                --y;
                ans += val_b;
            }
            else {
                if (x > y) {
                    ans += val_a;
                    --x;
                }
                else {
                    ans += val_b;
                    --y;
                }
            }
        }
        else if (x > 0) {
            ans += val_a;
            --x;
        }
        else {
            ans += val_b;
            --y;
        }
	}
	cout << ans << endl;
	
	return 0;
}
