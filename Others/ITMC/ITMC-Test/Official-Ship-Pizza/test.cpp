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

        if (i <= 3) {
            Data n = Data(5, 10);
            n.val = n.rnd();
            Data val = Data(5, 15);

            Data x = Data(1, n.val);
            Data y = Data(1, n.val);
            do {
                x.val = x.rnd();
                y.val = y.rnd();
            } while (x.val + y.val < n.val);

            cout << n.val << " " << x.val << " " << y.val << "\n";
            for (int i = 1; i <= n.val; ++i) {
                cout << val.rnd() << " ";
            }
            cout << "\n";

            for (int i = 1; i <= n.val; ++i) {
                cout << val.rnd() << " ";
            }
            cout << "\n";
        }
        else if (i <= 15) {
            Data n = Data(11, 20);
            n.val = n.rnd();
            Data val = Data(50, 100);

            Data x = Data(1, n.val);
            Data y = Data(1, n.val);
            do {
                x.val = x.rnd();
                y.val = y.rnd();
            } while (x.val + y.val < n.val);

            cout << n.val << " " << x.val << " " << y.val << "\n";
            for (int i = 1; i <= n.val; ++i) {
                cout << val.rnd() << " ";
            }
            cout << "\n";

            for (int i = 1; i <= n.val; ++i) {
                cout << val.rnd() << " ";
            }
            cout << "\n";
        }
        else {
            Data n = Data(1000, 100000);
            n.val = n.rnd();
            Data val = Data(100, 10000);

            Data x = Data(1, n.val);
            Data y = Data(1, n.val);
            do {
                x.val = x.rnd();
                y.val = y.rnd();
            } while (x.val + y.val < n.val);

            cout << n.val << " " << x.val << " " << y.val << "\n";
            for (int i = 1; i <= n.val; ++i) {
                cout << val.rnd() << " ";
            }
            cout << "\n";

            for (int i = 1; i <= n.val; ++i) {
                cout << val.rnd() << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}