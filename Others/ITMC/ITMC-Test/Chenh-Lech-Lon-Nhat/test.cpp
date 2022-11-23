#include <iostream>
#include <cstdlib>

using namespace std;

struct Data {
    int l, r;
    int val;

    Data(int low = 0, int high = 0) {
        l = low;
        r = high;
        return;
    }

    int rnd() {
        return rand() % (this->r - this->l + 1) + this->l;
    }
};

int main() {
    for (int i = 1; i <= 30; ++i) {
        string in = to_string(i) + ".in";
        freopen(in.c_str(), "w", stdout);

        if (i <= 2) {
            Data q = Data(1, 10);
            q.val = q.rnd();
            Data n = Data(5, 20);
            n.val = n.rnd();
            Data k = Data(5, 10);
            k.val = k.rnd();
            Data v = Data(10, 30);
            
            cout << q.val << "\n";
            while (q.val--) {
                n.val = n.rnd();
                k = Data(1, n.val - 1);
                k.val = k.rnd();
                cout << n.val << " " << k.val << "\n";
                for (int i = 1; i <= n.val; ++i) {
                    cout << v.rnd() << (i < n.val ? " " : "\n");
                }
            }
        }
        else {
            Data q = Data(100, 100);
            q.val = q.rnd();
            Data n = Data(500, 10000);
            n.val = n.rnd();
            Data k = Data(50, 100);
            k.val = k.rnd();
            Data v = Data(1000, 10000);
            
            cout << q.val << "\n";
            while (q.val--) {
                n.val = n.rnd();
                k = Data(1, min(n.val - 1, 100));
                k.val = k.rnd();
                cout << n.val << " " << k.val << "\n";
                for (int i = 1; i <= n.val; ++i) {
                    cout << v.rnd() << (i < n.val ? " " : "\n");
                }
            }
        }
    }
    return 0;
}