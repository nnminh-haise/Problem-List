#include <bits/stdc++.h>

using namespace std;

//  This function's existence is just for fun.
int input(string message) {
    int value;
    cout << message;
    cin >> value;
    return value;
}

//  This function's existence is just for fun.
string toString(int x) {
    string res = "";
    while (x > 0) {
        res = char(x % 10 + '0') + res;
        x /= 10;
    }
    return res;
}

//  This function's existence is just for a convenient coding time.
void initMatrix(int**& a, const int n) {
    a = new int* [n];
    for (int i = 0; i < n; ++i) {
        a[i] = new int [n];
    }
    return;
}

void initMatrix(int**& a, const int n, const int m) {
    a = new int* [n];
    for (int i = 0; i < n; ++i) {
        a[i] = new int [m];
    }
    return;
}

//  This function's existence is just for a convenient coding time.
void inputMatrix(int**& a, const int n) {
    initMatrix(a, n);
    cout << "Nhap gia tri ma tran A!\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Nhap gia tri cua A[" << i << "][" << j << ": ";
            cin >> a[i][j];
        }
    }
    return;
}

void inputMatrix(int**& a, const int n, const int m) {
    initMatrix(a, n, m);
    cout << "Nhap gia tri ma tran A!\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << "Nhap gia tri cua A[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
    return;
}

//  This function's existence is just for a convenient coding time.
void printMatrix(int** const& a, const int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << setw(5) << a[i][j] << (j < n - 1 ? " " : "\n");
        }
    }
    cout << "\n";
    return;
}

//  Overloading function printMatrix! In order to print a N x M matrix
void printMatrix(int** const& a, const int n, const int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(5) << a[i][j] << (j < m - 1 ? " " : "\n");
        }
    }
    cout << "\n";
    return;
}

//  This function's existence is just for a convenient coding time.
/*
    There is a bug that I cannot overload the function randomizeMatrix?
*/
void randomizeMatrix(int**& a, const int n, const int min_value = 1, const int max_value = 50) {
    initMatrix(a, n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            a[i][j] = rand() % (max_value - min_value + 1) + min_value;
        }
    }
    return;
}

void randomizeMatrixNM(int**& a, const int n, const int m, const int min_value = 1, const int max_value = 50) {
    initMatrix(a, n, m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            a[i][j] = rand() % (max_value - min_value + 1) + min_value;
        }
    }
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
        int** getMinor(int** const& a, const int n, const int row, const int column) {
            int** result;
            initMatrix(result, n - 1);

            vector < int > values;
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (!(i == row or j == column)) {
                        values.push_back(a[i][j]);
                    }
                }
            }

            int index = 0;
            for (int i = 0; i < n - 1; ++i) {
                for (int j = 0; j < n - 1; ++j) {
                    result[i][j] = values[index++];
                }
            }

            return result;
        }

        long long getDeterminant(int** const& a, const int n) {
            if (n == 2) {
                return a[0][0] * a[1][1] - a[0][1] * a[1][0];
            }

            long long sum = 0;
            for (int j = 0; j < n; ++j) {
                sum += (long long)(j % 2 == 1 ? -1 : 1) * (long long)a[0][j] * getDeterminant(getMinor(a, n, 0, j), n - 1);
            }
            return sum;
        }

        Bai3() {
            cout << "Bai 3.\n\n";
            int n = input("Nhap gia tri cua n: ");

            int** a;
            inputMatrix(a, n);
            // initMatrix(a, n);
            // randomizeMatrix(a, n);

            cout << "Ma tran A:\n";
            printMatrix(a, n);

            long long result = getDeterminant(a, n);
            cout << "Dinh thuc cua ma tran A = det(A) = |A| = " << result << endl;

            return;
        }
};

class Bai4 {
    public:
        int** getTransposeMatrix(int** const& a, const int n, const int m) {
            int** b;
            initMatrix(b, m, n);

            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    b[j][i] = a[i][j];
                }
            }
            return b;
        }

        Bai4() {
            cout << "Bai 4.\n\n";
            int n = input("Nhap gia tri cua n: ");
            int m = input("Nhap gia tri cua m: ");
            int** a;
            // inputMatrix(a, n, m);
            randomizeMatrixNM(a, n, m);

            cout << "Ma tran A:\n";
            printMatrix(a, n, m);

            int** b = getTransposeMatrix(a, n, m);
            cout << "Ma tran chuyen vi cua A:\n";
            printMatrix(b, m, n);

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

            // randomMatrix(a, m, n, 1, 50);
            // randomMatrix(b, n, p, 1, 50);

            cout << "Nhap gia tri cho ma tran A kich thuoc mxn:\n";
            for (int i = 0; i < m; ++i)
                for (int j = 0; j < n; ++j)
                    a[i][j] = input("Nhap gia tri cho A[" + toString(i + 1) + "][" + toString(j + 1) + "]");

            cout << "Nhap gia tri cho ma tran B kich thuoc nxp:\n";
            for (int i = 0; i < n; ++i)
                for (int j = 0; j < p; ++j)
                    b[i][j] = input("Nhap gia tri cho B[" + toString(i + 1) + "][" + toString(j + 1) + "]");

            for (int i = 0; i < m; ++i) {
                for (int j = 0; j < p; ++j) {
                    int sum = 0;
                    for (int k = 0; k < n; ++k)
                        sum += a[i][k] * b[k][j];

                    c[i][j] = sum;
                }
            }

            cout << "Ma tran C = A x B:\n";
            printMatrix(c, m, p);

            return;
        }
};

class Bai7 {
    public:
        Bai7() {
            cout << __func__ << "\n\n";
            return;
        }
};

class Bai8 {
    public:
        long long tong(int n) {
            if (n == 0)
                return 0;
            
            return tong(n - 1) + n;
        }

        Bai8() {
            cout << __func__ << "\n\n";
            int n = input("Nhap gia tri n: ");
            cout << "Tong(" << n << ") = " << tong(n) << endl;
            return;
        }
};

class Bai9 {
    public:
        long long tongchanle(int n) {
            if (n < 0)
                return 0;

            return n + tongchanle(n - 2);
        }

        Bai9() {
            cout << __func__ << "\n\n";
            int n = input("Nhap gia tri n: ");
            cout << "Tongchanle(" << n << ") = " << tongchanle(n) << endl;
            return;
        }
};

class Bai10 {
    public:
        long long tich(int n) {
            if (n == 0)
                return 0;

            if (n == 1)
                return 1;

            return n * tich(n - 1);
        }

        Bai10() {
            cout << __func__ << "\n\n";
            int n = input("Nhap gia tri n: ");
            cout << "Tich(" << n << ") = " << tich(n) << endl;
            return;
        }
};

class Bai11 {
    public:
        long long tichchanle(int n) {
            if (n <= 0)
                return 1;

            return n * tichchanle(n - 2);
        }

        Bai11() {
            cout << __func__ << "\n\n";
            int n = input("Nhap gia tri n: ");
            cout << "Tichchanle(" << n << ") = " << tichchanle(n) << endl;
            return;
        }
};

class Bai12 {
    public:
        long long phanTu(const int &a, int n, const int &d) {
            if (n == 0)
                return a;

            return d + phanTu(a, n - 1, d);
        }

        long long tongPhanTu(const int &a, int n, const int &d) {
            if (n == 0)
                return a;

            return a + n * d + tongPhanTu(a, n - 1, d);
        }

        Bai12() {
            cout << __func__ << "\n\n";
            int a = input("Nhap gia tri a[0]: ");
            int d = input("Nhap cong sai d: ");
            int n = input("Nhap gia tri n: ");
            cout << "Phan tu thu " << n << " cua cap so cong: " << phanTu(a, n, d) << endl;
            cout << "Tong cap so cong cua " << n << " phan tu dau tien: " << tongPhanTu(a, n, d) << endl;
            return;
        }
};

class Bai13 {
    public:
        long long binaryPower(long long a, long long b) {
            if (b == 0)
                return 1;

            if (b == 1)
                return a;

            long long half = binaryPower(a, b / 2);
            if (b % 2 == 0)
                return half * half;

            return half * half * a;
        }

        long long phanTu(const int &a, int n, const int &d) {
            if (n == 0)
                return a;

            return d * phanTu(a, n - 1, d);
        }

        long long tongPhanTu(const int &a, int n, const int &d) {
            if (n == 0)
                return a;

            return a * binaryPower(d, n) + tongPhanTu(a, n - 1, d);
        }

        Bai13() {
            cout << __func__ << "\n\n";
            int a = input("Nhap gia tri phan tu a[0]: ");
            int d = input("Nhap gia tri cong sai d: ");
            int n = input("Nhap gia tri phan tu n: ");

            cout << "Phan tu thu " << n << " cua cap so nhan: " << phanTu(a, n, d) << endl;
            cout << "Tong cua " << n << " phan tu dau tien cua cap so nhan: " << tongPhanTu(a, n, d) << endl;
            return;
        }
};

class Bai14 {
    public:
        /*
            Let fibo[0] = 0, fibo[1] = 1
        */
        long long fib(long long n) {
            if (n == 0 or n == 1)
                return n;

            return fib(n - 1) + fib(n - 2);
        }

        long long sumFib(long long n) {
            if (n == 0 or n == 1)
                return n;

            return fib(n) + sumFib(n - 1);
        }

        long long phanTu(const int &a, const int &b, const int &p, const int &q, int n) {
            if (n == 0)
                return a;

            if (n == 1)
                return b;

            return p * phanTu(a, b, p, q, n - 1) + q * phanTu(a, b, p, q, n - 2);
        }

        long long tongPhanTu(const int &a, const int &b, const int &p, const int &q, int n) {
            if (n == 0)
                return a;

            if (n == 1)
                return b;

            return phanTu(a, b, p, q, n) + tongPhanTu(a, b, p, q, n - 1);
        }

        Bai14() {
            cout << __func__ << "\n\n";
            int a = input("Nhap gia tri cua phan tu a[0]: ");
            int b = input("Nhap gia tri cua phan tu a[1]: ");
            int p = input("Nhap gia tri cua p: ");
            int q = input("Nhap gia tri cua q: ");
            int n = input("Nhap gia tri cua n: ");

            cout << "So Fibonacci thu " << n << ": " << fib(n) << endl;
            cout << "Tong " << n << " so Fibonacci dau tien: " << sumFib(n) << endl;
            cout << "Phan tu thu " << n << " cua day: " << phanTu(a, b, p, q, n) << endl;
            cout << "Tong " << n << " phan tu dau tien cua day: " << tongPhanTu(a, b, p, q, n) << endl;
            return;
        }
};

int main() {
    srand(time(NULL));
    // Bai1 bt;
    // Bai2 bt;
    Bai3 bt;
    // Bai4 bt;
    // Bai5 bt;
    // Bai6 bt;
    // Bai7 bt;
    // Bai8 bt;
    // Bai9 bt;
    // Bai10 bt;
    // Bai11 bt;
    // Bai12 bt;
    // Bai13 bt;
    // Bai14 bt;

    return 0;
}