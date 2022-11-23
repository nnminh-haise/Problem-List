#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

struct Data {
    double R, G, B;
    string color;

    Data(double r, double g, double b, string _color) {
        R = r;
        G = g;
        B = b;
        color = _color;
        return;
    }
};

double sqr(double val) {
    return val * val;
}

int main() {
    FASTIO;
    #ifndef ONLINE_JUDGE
        freopen("data.txt", "r", stdin);
    #endif

    vector < Data > colors;
    colors.push_back(Data(255, 255, 255, "White"));
    colors.push_back(Data(192, 192, 192, "Silver"));
    colors.push_back(Data(128, 128, 128, "Gray"));
    colors.push_back(Data(0, 0, 0, "Black"));
    colors.push_back(Data(255, 0, 0, "Red"));
    colors.push_back(Data(128, 0, 0, "Maroon"));
    colors.push_back(Data(255, 255, 0, "Yellow"));
    colors.push_back(Data(128, 128, 0, "Olive"));
    colors.push_back(Data(0, 255, 0, "Lime"));
    colors.push_back(Data(0, 128, 0, "Green"));
    colors.push_back(Data(0, 255, 255, "Aqua"));
    colors.push_back(Data(0, 128, 128, "Teal"));
    colors.push_back(Data(0, 0, 255, "Blue"));
    colors.push_back(Data(0, 0, 128, "Navy"));
    colors.push_back(Data(255, 0, 255, "Fuchsia"));
    colors.push_back(Data(128, 0, 128, "Purple"));

    while (true) {
        double r, g, b;
        cin >> r >> g >> b;
        if (r == -1 && g == -1 && b == -1) {
            break;
        }

        int min_index = 0;
        double min_val = sqrt(sqr(colors[0].R - r) + sqr(colors[0].G - g) + sqr(colors[0].B - b));
        for (int i = 1; i < colors.size(); ++i) {
            double d = sqrt(sqr(colors[i].R - r) + sqr(colors[i].G - g) + sqr(colors[i].B - b));
            if ((d < min_val) || (d == min_val && i < min_index)) {
                min_val = d;
                min_index = i;
            }
        }
        cout << colors[min_index].color << "\n";
    }

    return 0;
}