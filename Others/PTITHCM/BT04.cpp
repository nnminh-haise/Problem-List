#include <bits/stdc++.h>

using namespace std;

double sqr(double x) {
    return x * x;
}

int sqr(int x) {
    return x * x;
}

long long sqr(long long x) {
    return x * x;
}

long long factorial(int n) {
    long long fac = 1;
    for (int i = 1; i <= n; ++i)
        fac *= i;
    return fac;
}

class Bai1 {
    public:
        char toLower(char x) {
            if (!(((x >= 'a') and (x <= 'z')) or ((x >= 'A') and (x <= 'Z'))))
                return '!';
            if ((x >= 'a') and (x <= 'z'))
                return x;
            return (char(abs('a' - 'A') + x));
        }

        void ptbac1() {
            cout << "Phuong trinh bac nhat: ax + b = 0.\n\n";
            int a, b;
            cout << "Nhap gia tri a: ";
            cin >> a;
            cout << "Nhap gia tri b: ";
            cin >> b;
            if (a == 0 and b == 0) {
                cout << "Phuong trinh co vo so nghiem.\n\n";
            }
            else if (a == 0 and b != 0) {
                cout << "Phuong trinh vo nghiem.\n\n";
            }
            else {
                cout << "Phuong trinh co nghiem x = " << (-b * 1.0) / (a * 1.0) << "\n\n";
            }
            return;
        }

        void ptbac2() {
            cout << "Phuong trinh bac hai: ax^2 + bx + c = 0.\n\n";
            double a, b, c;
            cout << "Nhap gia tri a: ";
            cin >> a;
            cout << "Nhap gia tri b: ";
            cin >> b;
            cout << "Nhap gia tri c: ";
            cin >> c;

            if (a == 0 and b == 0 and c == 0) {
                cout << "Phuong trinh co vo so nghiem!\n";
            }
            else if (a == 0 and b == 0 and c != 0) {
                cout << "Phuong trinh vo nghiem!\n";
            }
            else if (a == 0 and b != 0) {
                double x = -c / b;
                cout << "Phuong trinh co nghiem duy nhat: " << x << endl;
            }
            else {
                double delta = sqr(b) - 4 * a * c;
                if (delta < 0) {
                    cout << "Phuong trinh vo nghiem!\n";
                }
                else if (delta == 0) {
                    double x = (-b * 1.0) / (2 * 1.0 * a);
                    cout << "Phuong trinh co duy nhat nghiem x = " << x << endl;
                }
                else {
                    double x1 = (-b * 1.0 + sqrt(delta)) / (2 * 1.0 * a), x2 = (-b * 1.0 - sqrt(delta)) / (2 * 1.0 * a);
                    cout << "Nghiem x1 = " << x1 << endl;
                    cout << "Nghiem x2 = " << x2 << endl;
                }
            }
            cout << endl;
            return;
        }

        int getMin() {
            int a, b, c, d;
            cout << "Nhap gia tri a: ";
            cin >> a;
            cout << "Nhap gia tri b: ";
            cin >> b;
            cout << "Nhap gia tri c: ";
            cin >> c;
            cout << "Nhap gia tri d: ";
            cin >> d;

            int min_value = a;
            min_value = min(min_value, b);
            min_value = min(min_value, c);
            min_value = min(min_value, d);
            return min_value;
        }

        void swap(int &a, int &b) {
            int tmp = a;
            a = b;
            b = tmp;
            return;
        }

        void sortArray() {
            int a[4];
            cout << "Nhap gia tri a: ";
            cin >> a[0];
            cout << "Nhap gia tri b: ";
            cin >> a[1];
            cout << "Nhap gia tri c: ";
            cin >> a[2];
            cout << "Nhap gia tri d: ";
            cin >> a[3];

            for (int i = 0; i < 4; ++i) {
                for (int j = i + 1; j < 4; ++j) {
                    if (a[i] > a[j]) {
                        swap(a[i], a[j]);
                    }
                }
            }

            cout << "Bon gia tri sau khi sap xep: [";
            for (int i = 0; i < 4; ++i) {
                cout << a[i] << (i < 3 ? ", " : "].");
            }
            cout << endl;
            return;
        }

        void mainA() {
            cout << "Cau a):\n";
            char x = char(rand() % ('Z' - 'A' + 1) + 'A');
            cout << "Ki tu X ngau nhien: " << x << endl;
            cout << "Ki tu X chuyen sang chu thuong: " << toLower(x) << endl;
            cout << "\n";
            return;
        }

        void mainB() {
            cout << "Cau b):\n";
            ptbac1();
            cout << "\n";
            return;
        }

        void mainC() {
            cout << "Cau c):\n";
            ptbac2();
            cout << "\n";
            return;
        }

        void mainD() {
            cout << "Cau d):\n";
            int res = getMin();
            cout << "Gia tri nho nhat trong 4 so: " << res << "\n";
            cout << "\n";
            return;
        }

        void mainE() {
            cout << "cau e):\n";
            int a = rand() % 50 + 1, b = rand() % 50 + 1;
            cout << "Gia tri a va b ban dau: " << a << ", " << b << endl;
            swap(a, b);
            cout << "Gia tri a va b luc sau: " << a << ", " << b << endl;
            cout << "\n";
            return;
        }

        void mainF() {
            cout << "Cau f):\n";
            sortArray();
            cout << "\n";
            return;
        }

        Bai1() {
            cout << "Bai 1.\n\n";
            mainA();
            mainB();
            mainC();
            mainD();
            mainE();
            mainF();
            cout << "\n";
            return;
        }
};

class Bai2 {
    public:
        long long getReverseNumber(long long x) {
            long long res = 0;
            while (x > 0) {
                res = res * 10;
                res += x % 10;
                x /= 10;
            }
            return res;
        }

        bool isPalindromeNumber(long long x) {
            long long tmp_x = getReverseNumber(x);
            return (x == tmp_x);
        }

        bool isPerfectSquare(long long x) {
            long long tmp_x = ceil(sqrt(x));
            return (tmp_x * tmp_x == x);
        }

        bool isPrime(long long x) {
            if (x < 2)
                return false;
            if (x == 2 or x == 3)
                return true;
            if (x % 2 == 0)
                return false;
            for (int i = 3; i <= sqrt(x); i += 2)
                if (x % i == 0)
                    return false;
            return true;
        }

        long long getSumOddDigits(long long x) {
            vector <int> digits;
            while (x > 0) {
                digits.push_back(x % 10);
                x /= 10;
            }
            reverse(digits.begin(), digits.end());

            long long sum = 0;
            for (int i = 1; i <= (int)digits.size(); i += 2)
                sum += digits[i - 1];
            return sum;
        }

        long long getSumPrimeDigits(long long x) {
            vector <int> digits;
            while (x > 0) {
                digits.push_back(x % 10);
                x /= 10;
            }
            reverse(digits.begin(), digits.end());

            long long sum = 0;
            for (int i = 1; i <= (int)digits.size(); i += 1)
                if (isPrime(digits[i - 1]))
                    sum += digits[i - 1];
            return sum;
        }

        long long getSumPerfectSquareDigits(long long x) {
            vector <int> digits;
            while (x > 0) {
                digits.push_back(x % 10);
                x /= 10;
            }
            reverse(digits.begin(), digits.end());

            long long sum = 0;
            for (int i = 1; i <= (int)digits.size(); i += 1)
                if (isPerfectSquare(digits[i - 1]))
                    sum += digits[i - 1];
            return sum;
        }

        bool isPerfectNumber(long long x) {
            long long sum = 0;
            for (int i = 1; i < x; ++i)
                if (x % i == 0)
                    sum += i;
            return (sum == x);
        }

        bool isAmstrong(long long x) {
            vector <int> digits;
            while (x > 0) {
                digits.push_back(x % 10);
                x /= 10;
            }
            reverse(digits.begin(), digits.end());

            long long sum = 0;
            for (int digit: digits) {
                sum += digit * digit * digit;
            }
            return (sum == x);
        }

        int getInput() {
            int n;
            do {
                cout << "Nhap gia tri n: ";
                cin >> n;
            } while (n <= 0);
            return n;
        }

        void mainA() {
            cout << "Cau a):\n";
            int n = getInput();
            cout << "So nghich dao cua so " << n << ": " << getReverseNumber(n) << endl;
            cout << "\n";
            return;
        }

        void mainB() {
            cout << "Cau b):\n";
            int n = getInput();
            if (isPalindromeNumber(n))
                cout << n << " la so doi xung!\n";
            else
                cout << n << " khong la so doi xung!\n";
            cout << "\n";
            return;
        }

        void mainC() {
            cout << "Cau c):\n";
            int n = getInput();
            if (isPerfectSquare(n))
                cout << n << " la so chinh phuong!\n";
            else
                cout << n << " khong la so chinh phuong!\n";
            cout << "\n";
            return;
        }

        void mainD() {
            cout << "Cau d):\n";
            int n = getInput();
            if (isPrime(n))
                cout << n << " la so nguyen to!\n";
            else
                cout << n << " khong la so nguyen to!\n";
            cout << "\n";
            return;
        }

        void mainE() {
            cout << "Cau e):\n";
            int n = getInput();
            int res = getSumOddDigits(n);
            cout << "Tong cac chu so le cua " << n << ": " << res << endl;
            cout << "\n";
            return;
        }

        void mainF() {
            cout << "Cau f):\n";
            int n = getInput();
            int res = getSumPrimeDigits(n);
            cout << "Tong cac chu so nguyen to cua " << n << ": " << res << endl;
            cout << "\n";
            return;
        }

        void mainG() {
            cout << "Cau g):\n";
            int n = getInput();
            int res = getSumPerfectSquareDigits(n);
            cout << "Tong cac chu so chinh phuong cua " << n << ": " << res << endl;
            cout << "\n";
            return;
        }

        void mainH() {
            cout << "Cau h):\n";
            int n = getInput();
            if (isPerfectNumber(n))
                cout << n << " la so hoan hao!\n";
            else
                cout << n << " khong la so hoan hao!\n";
            cout << "\n";
            return;
        }

        void mainI() {
            cout << "Cau i):\n";
            int n = getInput();
            if (isAmstrong(n))
                cout << n << " la so Amstrong!\n";
            else
                cout << n << " khong la so Amstrong!\n";
            cout << "\n";
            return;
        }

        Bai2() {
            cout << "Bai 2.\n\n";
            mainA();
            mainB();
            mainC();
            mainD();
            mainE();
            mainF();
            mainG();
            mainH();
            mainI();
            cout << "\n";
            return;
        }
};

class Bai3 {
    public:
        long long S1(int n) {
            long long sum = 0;
            for (int i = 1; i <= n; ++i)
                sum += i;
            return sum;
        }

        long long S2(int n) {
            long long sum = 0;
            for (int i = 1; i <= n; ++i)
                sum += sqr(i);
            return sum;
        }

        double S3(int n) {
            double sum = 0;
            for (double i = 1; i <= n; ++i)
                sum += 1.0 / i;
            return sum;
        }

        long long P(int n) {
            long long fac = 1;
            for (int i = 1; i <= n; ++i)
                fac *= i;
            return fac;
        }

        long long S4(int n) {
            long long sum = 0;
            for (int i =1 ; i <= n; ++i)
                sum += P(i);
            return sum;
        }

        int getInput() {
            int n;
            do {
                cout << "Nhap gia tri n: ";
                cin >> n;
            } while (n <= 0);
            return n;
        }

        Bai3() {
            cout << "Bai 3.\n\n";
            int n = getInput();
            cout << "Tong S1 = " << S1(n) << endl;
            cout << "Tong S2 = " << S2(n) << endl;
            cout << "Tong S3 = " << S3(n) << endl;
            cout << "Tong P  = " << P(n) << endl;
            cout << "Tong S4 = " << S4(n) << endl;
            cout << "\n";
            return;
        }
};

class Bai4 {
    public:
        long long USCLN(long long a, long long b) {
            return b ? gcd (b, a % b) : a;
        }

        Bai4() {
            cout << "Bai 4.\n\n";
            int a, b;
            do {
                cout << "Nhap gia tri a: ";
                cin >> a;
            } while (a < 0);
            do {
                cout << "Nhap gia tri b: ";
                cin >> b;
            } while (b < 0);
            cout << "Uoc so chung lon nhat cua " << a << " va " << b << ": " << USCLN(a, b) << endl;
            cout << "\n";
            return;
        }
};

class Bai5 {
    public:
        void printFibonacci(int n) {
            long long fib[n + 1];
            fib[0] = 0;
            fib[1] = 1;
            for (int i = 2; i <= n; ++i)
                fib[i] = fib[i - 1] + fib[i - 2];
            cout << "Day Fibonacci co " << n << " phan tu: [";
            for (int i = 0; i <= n; ++i)
                cout << fib[i] << (i < n ? ", " : "].\n");
            cout << "\n";
        }

        Bai5() {
            cout << "Bai 5.\n\n";
            int n = rand() % 10 + 1 + 5;
            cout << "n = " << n << endl;
            printFibonacci(n);
            cout << "\n";
            return;
        }
};

class Bai6 {
    public:
        long tongLe(int n) {
            long sum = 0;
            for (int i = 1; i <= n; i += 2)
                sum += i;
            return sum;
        }

        Bai6() {
            cout << "Bai 6.\n\n";
            int n;
            do {
                cout << "Nhap gia tri n: ";
                cin >> n;
            } while (n <= 0);

            cout << "Gia tri tongLe(" << n << "): " << tongLe(n) << endl;
            cout << "\n";
            return;
        }
};

class Bai7 {
    public:
        double tongNDGT(int n) {
            double sum = 0;
            for (int i = 1; i <= n; ++i)
                sum += 1.0 / factorial(i);
            return sum;
        }

        long long P(int n) {
            long long mul = 1;
            if (n % 2 == 0)
                for (int i = 2; i <= n; i += 2)
                    mul *= i;
            else
                for (int i = 1; i <= n; i += 2)
                    mul *= i;
            return mul;
        }

        int getInput() {
            int n;
            do {
                cout << "Nhap gia tri n: ";
                cin >> n;
            } while (n <= 0);
            return n;
        }

        Bai7() {
            cout << "Bai 7.\n\n";
            int n = getInput();
            cout << "Gia tri ham tongNDGT(" << n << "): " << tongNDGT(n) << endl;
            cout << "Gia tri ham P(" << n << "): " << P(n) << endl;
            cout << "\n";
            return;
        }
};

class Bai8 {
    public:
        int ucln(int a, int b) {
            return b ? ucln (b, a % b) : a;
        }

        Bai8() {
            cout << "Bai 8.\n\n";
            int a, b;
            do {
                cout << "Nhap tu so: ";
                cin >> a;
            } while (a < 0);
            do {
                cout << "Nhap mau so: ";
                cin >> b;
            } while (b <= 0);

            int gcd = ucln(a, b);
            a /= gcd;
            b /= gcd;
            cout << "Phan so sau khi toi gian: " << a << "/" << b << " = " << ((a * 1.0) / (b * 1.0)) << endl;
            cout << "\n";
            return;
        }
};

class Bai9 {
    public:
        void nhap(int *A, int &N) {
            cout << "Nhap gia tri N: ";
            cin >> N;
            for (int i = 0; i < N; ++i) {
                cout << "Nhap gia tri A[" << i << "]: ";
                cin >> A[i];
            }
            return;
        }

        void xuat(int *A, int &N) {
            cout << "Mang A = [";
            for (int i = 0; i < N; ++i)
                cout << A[i] << (i < N - 1 ? ", " : "].\n");
            cout << "\n";
            return;
        }

        Bai9() {
            cout << "Bai 9.\n\n";
            int n, a[100007];
            nhap(a, n);
            xuat(a, n);
            cout << "\n";
            return;
        }
};

class Bai10 {
    public:
        void xuatchan(int *A, int &N) {
            cout << "Cac so chan trong A = [";
            for (int i = 0; i < N; ++i)
                if (A[i] % 2 == 0)
                    cout << A[i] << " ";
            cout << "].\n\n";
            return;
        }

        void xuatVTchan(int *A, int &N) {
            cout << "Cac o vi tri chan trong A = [";
            for (int i = 1; i <= N; ++i)
                if (i % 2 == 0)
                    cout << A[i - 1] << " ";
            cout << "].\n\n";
            return;
        }

        void thanhle(int *A, int &N) {
            cout << "Cac so thanh le trong A = [";
            for (int i = 0; i < N; ++i)
                if (A[i] % 2 == 0)
                    cout << (++A[i]) << " ";
            cout << "].\n\n";
            return;
        }

        void nhap(int *A, int &N) {
            cout << "Nhap gia tri N: ";
            cin >> N;
            for (int i = 0; i < N; ++i) {
                cout << "Nhap gia tri A[" << i << "]: ";
                cin >> A[i];
            }
            return;
        }

        void xuat(int *A, int &N) {
            cout << "Mang A = [";
            for (int i = 0; i < N; ++i)
                cout << A[i] << (i < N - 1 ? ", " : "].\n");
            cout << "\n";
            return;
        }

        Bai10() {
            cout << "Bai 10.\n\n";
            int n, a[100007];
            nhap(a, n);
            xuatchan(a, n);
            xuatVTchan(a, n);
            thanhle(a, n);
            xuat(a, n);
            cout << "\n";
            return;
        }
};

class Bai11 {
    public:
        int timNhoNhat(int *A, int N) {
            int res = A[0];
            for (int i = 1; i < N; ++i)
                res = min(res, A[i]);
            return res;
        }

        double trungbinh(int *A, int N) {
            double res = 0;
            for (int i = 0; i < N; ++i)
                res += A[i];
            return res / N;
        }

        int timkiem(int *A, int N, int K) {
            for (int i = 0; i < N; ++i)
                if (A[i] == K)
                    return i + 1;
            return -1;
        }

        void nhap(int *A, int &N) {
            cout << "Nhap gia tri N: ";
            cin >> N;
            for (int i = 0; i < N; ++i) {
                cout << "Nhap gia tri A[" << i << "]: ";
                cin >> A[i];
            }
            return;
        }

        void xuat(int *A, int &N) {
            cout << "Mang A = [";
            for (int i = 0; i < N; ++i)
                cout << A[i] << (i < N - 1 ? ", " : "].\n");
            cout << "\n";
            return;
        }

        Bai11() {
            cout << "Bai 11.\n\n";
            int n, a[100007];
            nhap(a, n);
            cout << "Gia tri nho nhat trong mang A: " << timNhoNhat(a, n) << endl;
            cout << "Gia tri trung bình cua mang A: " << trungbinh(a, n) << endl;
            int k;
            cout << "Nhap gia tri k: ";
            cin >> k;
            int res = timkiem(a, n, k);
            if (res != -1)
                cout << "Vi tri cua gia tri " << k << " trong mang A: " << res << endl;
            else
                cout << "Khoong co gia tri " << k << " trong mang A\n";
            cout << "\n";
            return;
        }
};

class Bai12 {
    public:
        Bai12() {
            cout << "Bai 12.\n\n";
            int a[20], i = 0;
            Bai11 b11;

            do {
                int val;
                cout << "Nhap mot gia tri trong khoan tu 10 den 100: ";
                cin >> val;
                int res;
                if (i == 0) {
                    res = -1;
                }
                else {
                    res = b11.timkiem(a, 20, val);
                }
                if (res == -1) {
                    cout << "Day la mot so moi!\n";
                    a[i] = val;
                    ++i;
                }
                else {
                    cout << "So vua nhap da ton tai!\n";
                }
            } while (i < 20);

            cout << "\n";
            cout << "20 so nguyen khac nhau: [";
            for (int i = 0; i < 20; ++i) {
                cout << a[i] << (i < 19 ? ", " : "].\n\n");
            }
            cout << "\n";
            return;
        }
};

class Bai13 {
    public:
        bool isPalindromeArray(int *A, int N) {
            for (int i = 0; i < N / 2; ++i)
                if (A[i] != A[N - i - 1])
                    return false;
            return true;
        }

        Bai13() {
            cout << "Bai 13.\n\n";
            int n;
            cout << "Nhap gia tri n: ";
            cin >> n;
            int a[n];
            for (int i = 0; i < n; ++i) {
                cout << "Nhap gia tri cho phan tu A[" << i << "]: ";
                cin >> a[i];
            }
            cout << "Gia tri tra ve: " << isPalindromeArray(a, n) << endl;
            cout << "\n";
            return;
        }
};

class Bai14 {
    public:
        long long calculateFibN(long long* fib, int n) {
            fib[0] = 0;
            fib[1] = 1;
            for (int i = 2; i <= n; ++i)
                fib[i] = fib[i - 1] + fib[i - 2];
            return fib[n];
        }

        long long sumReverseFib(long long *fib, int n) {
            Bai2 b2;
            long long sum = 0;
            for (int i = 1; i <= n; ++i)
                sum += b2.getReverseNumber(fib[i]);
            return sum;
        }

        void reverseArray(int *A, int N) {
            for (int i = 0; i < N / 2; ++i)
                swap(A[i], A[N - i - 1]);
            return;
        }

        Bai14() {
            cout << "Bai 14.\n\n";
            int n;
            cout << "Nhap gia tri n: ";
            cin >> n;

            long long fib[n + 1];
            long long res = calculateFibN(fib, n);
        
            // Câu a:
            cout << "So Fibonacci thu " << n << ": " << res << endl;
            cout << n << " so Fibonacci dau tien: [";
            for (int i = 0; i <= n; ++i)
                cout << fib[i] << (i < n ? ", " : "].\n\n");

            // Câu b:
            cout << "Tong nghich dao cua " << n - 1 << " so Fibonacci dau tien: " << sumReverseFib(fib, n) << "\n\n";

            // Câu c: với mảng A có M phần tử là các giá trị random.
            int m = rand() % 10 + 1;
            cout << "m = " << m << endl;
            int a[m];
            for (int i = 0; i < m; ++i)
                a[i] = rand() % 50 + 1;
            cout << "Mang A ban dau: [";
            for (int i = 0; i < m; ++i)
                cout << a[i] << (i < m - 1 ? ", " : "].\n");
            reverseArray(a, m);
            cout << "Mang A sau khi dao nguoc: [";
            for (int i = 0; i < m; ++i)
                cout << a[i] << (i < m - 1 ? ", " : "].\n\n");

            cout << "\n";
            return;
        }
};

class Bai15 {
    public:
        void selectionSort(int *a, int n) {
            for (int i = 0; i < n - 1; ++i) {
                int min_id = i;
                for (int j = i + 1; j < n; ++j)
                    if (a[j] < a[min_id])
                        min_id = j;
                swap(a[i], a[min_id]);
            }
            return;
        }

        Bai15() {
            cout << "Bai 15.\n\n";
            int n = rand() % 20 + 1;
            cout << "Gia tri n: " << n << endl;
            int a[n];
            for (int i = 0; i < n; ++i)
                a[i] = rand() % 100 + 1;
            cout << "Mang A ban dau:         [";
            for (int i = 0; i < n; ++i)
                cout << a[i] << (i < n - 1 ? ", " : "].\n");
            selectionSort(a, n);
            cout << "Mang A sau khi sap xep: [";
            for (int i = 0; i < n; ++i)
                cout << a[i] << (i < n - 1 ? ", " : "].\n\n");

            cout << "\n";
            return;
        }
};

int main() {
    srand(time(NULL));

    Bai1 b1;
    Bai2 b2;
    Bai3 b3;
    Bai4 b4;
    Bai5 b5;
    Bai6 b6;
    Bai7 b7;
    Bai8 b8;
    Bai9 b9;
    Bai10 b10;
    Bai11 b11;
    Bai12 b12;
    Bai13 b13;
    Bai14 b14;
    Bai15 b15;

    return 0;
}