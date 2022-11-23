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
            cout << 1 << "\n"; // q;

            Data n = Data(1, 5);
            Data x = Data(2, 6);
            cout << n.rnd() << " " << x.rnd() << endl;
        }
        else if (i <= 15) {
            Data q = Data(100, 500);
            Data n = Data(300, 500);
            Data x = Data(200, 500);
            q.val = q.rnd();
            cout << q.val << "\n";
            while (q.val--) {
                cout << n.rnd() << " " << x.rnd() << endl;
            }
        }
        else {
            Data q = Data(501, 1000);
            Data n = Data(501, 1000);
            Data x = Data(501, 1000);
            q.val = q.rnd();
            cout << q.val << "\n";
            while (q.val--) {
                cout << n.rnd() << " " << x.rnd() << endl;
            }
        }
    }

    return 0;
}