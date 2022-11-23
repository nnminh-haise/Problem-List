#include <bits/stdc++.h>

using namespace std;

int input(string message) {
    int value;
    cout << message << ": ";
    cin >> value;
    return value;
}

void print(string message) {
    cout << message << endl;
    return;
}

string toString(int x) {
    string res = "";
    while (x > 0) {
        res = char(x % 10 + '0') + res;
        x /= 10;
    }
    return res;
}

void printMatrix(int **a, const int &n, const int &m) {
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cout << a[i][j] << (j < m - 1 ? " " : "\n");

    cout << "\n";
    return;
}

class Bai1 {
    public:
        Bai1() {
            cout << "Bai 1.\n\n";

            int n;
            cout << "Nhap gia tri n: ";
            cin >> n;
            int a[n + 1][n + 1];
            for (int i = 1; i <= n; ++i) {
                for (int j = 1; j <= n; ++j) {
                    cout << "Nhap gia tri cho A[" << i << "][" << j << "]: ";
                    cin >> a[i][j];
                }
            }

            cout << "Ma tran da nhap:\n";
            for (int i = 1; i <= n; ++i) {
                for (int j = 1; j <= n; ++j) {
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
            cout << "Duong cheo chinh: ";
            for (int i = 1; i <= n; ++i) {
                cout << a[i][i] << " ";
            }
            cout << "\n";

            cout << "Duong cheo phu: ";
            for (int i = 1; i <= n; ++i) {
                cout << a[n - i + 1][i] << " ";
            }
            cout << "\n";

            return;
        }
};

class Bai2 {
    public:
        Bai2() {
            cout << "Bai 2.\n\n";

            int n, m;
            cout << "Nhap gia tri n: ";
            cin >> n;
            cout << "Nhap gia tri m: ";
            cin >> m;
            int a[n + 1][m + 1];
            for (int i = 1; i <= n; ++i) {
                for (int j = 1; j <= m; ++j) {
                    cout << "Nhap gia tri cho A[" << i << "][" << j << "]: ";
                    cin >> a[i][j];
                }
            }

            for (int i = 1; i <= n; ++i) {
                cout << "Tong hang " << i << ": ";
                int sum = 0;
                for (int j = 1; j <= m; ++j) {
                    sum += a[i][j];
                }
                cout << sum << endl;
            }

            for (int j = 1; j <= m; ++j) {
                cout << "Tong cot " << j << ": ";
                int sum = 0;
                for (int i = 1; i <= n; ++i) {
                    sum += a[i][j];
                }
                cout << sum << endl;
            }
            return;
        }
};

class Bai3 {
    public:
        Bai3() {
            cout << "Bai 3.\n\n";

            int n;
            cout << "Nhap gia tri n: ";
            cin >> n;


            return;
        }
};

class Bai5 {
    public:
        Bai5() {
            cout << "Bai 5.\n\n";

            int n, m;
            cout << "Nhap gia tri n: ";
            cin >> n;
            cout << "Nhap gia tri m: ";
            cin >> m;

            int a[n + 1][m + 1], b[n + 1][m + 1];
            cout << "Nhap gia tri cho ma tran A:\n";
            for (int i = 1; i <= n; ++i) {
                for (int j = 1; j <= m; ++j) {
                    cout << "Nhap gia tri A[" << i << "][" << j << "]: ";
                    cin >> a[i][j];
                }
            }
            cout << "Nhap gia tri cho ma tran B:\n";
            for (int i = 1; i <= n; ++i) {
                for (int j = 1; j <= m; ++j) {
                    cout << "Nhap gia tri B[" << i << "][" << j << "]: ";
                    cin >> b[i][j];
                }
            }

            cout << "Tong hai ma tran:\n";
            for (int i = 1; i <= n; ++i) {
                for (int j = 1; j <= m; ++j) {
                    cout << a[i][j] + b[i][j] << " ";
                }
                cout << "\n";
            }
            cout << "\n";

            cout << "Hieu hai ma tran:\n";
            for (int i = 1; i <= n; ++i) {
                for (int j = 1; j <= m; ++j) {
                    cout << a[i][j] - b[i][j] << " ";
                }
                cout << "\n";
            }
            cout << "\n";

            return;
        }
};

class Bai6 {
    public:
        Bai6() {
            cout << "Bai 6.\n\n";

            int m = input("Nhap gia tri m");
            int n = input("Nhap gia tri n");
            int p = input("Nhap gia tri p");
            int **a = new int *[m];
            int **b = new int *[n];
            int **c = new int *[m];
            for (int i = 0; i < m; ++i)
                a[i] = new int[n];

            for (int i = 0; i < n; ++i)
                b[i] = new int[p];

            for (int i = 0; i < m; ++i)
                c[i] = new int[p];

            print("Nhap gia tri cho ma tran A kich thuoc mxn:");
            for (int i = 0; i < m; ++i)
                for (int j = 0; j < n; ++j)
                    a[i][j] = input("Nhap gia tri cho A[" + toString(i + 1) + "][" + toString(j + 1) + "]");

            print("Nhap gia tri cho ma tran B kich thuoc nxp:");
            for (int i = 0; i < n; ++i)
                for (int j = 0; j < p; ++j)
                    b[i][j] = input("Nhap gia tri cho B[" + toString(i + 1) + "][" + toString(j + 1) + "]");

            for (int i = 0; i < m; ++i) {
                for (int j = 0; j < p; ++j) {
                    int sum = 0;
                    for (int k = 0; k < n; ++k)
                        sum += a[i][k] * a[k][j];

                    c[i][j] = sum;
                }
            }

            printMatrix(c, m, p);

            return;
        }
};

int main() {
    Bai6 a;
    return 0;
}