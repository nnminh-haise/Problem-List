#include <bits/stdc++.h>

using namespace std;

long long fac(int n) {
    if (n == 0 or n == 1) return 1;
    long long fac = 1;
    for (int i = 1; i <= n; ++i) fac *= i;
    return fac;
}

void bai1() {
    cout << "Bai 1.\n\n";
    int n;
    do {
        cout << "Nhap gia tri n: ";
        cin >> n;
    } while (n <= 0);

    double s1[2], s2[2], s3[2];
    s1[0] = n * (n - 1) / 2;
    s2[0] = pow(n + 1, 2);
    s3[0] = n * (n + 1);

    for (int i = 1; i <= n; ++i) {
        s1[1] += i;
        s2[1] += (2 * i + 1);
        s3[1] += (2 * i);
    }

    s2[1] += 1; // vì s2 =  1 + 3 + 5 + ... + 2n + 1; -> thiếu hạng tử i = 0 -> s2 phải cộng thêm 1.

    cout << "Tong S1 theo cong thuc: " << s1[0] << endl;
    cout << "Tong S1 dung FOR: " << s1[1] << endl;
    cout << "Tong S2 theo cong thuc: " << s2[0] << endl;
    cout << "Tong S2 dung FOR: " << s2[1] << endl;
    cout << "Tong S3 theo cong thuc: " << s3[0] << endl;
    cout << "Tong S3 dung FOR: " << s3[1] << endl;

    cout << endl;
    return;
}

void bai2() {
    cout << "Bai 2.\n\n";
    int n;
    do {
        cout << "Nhap gia tri n: ";
        cin >> n;
    } while (n <= 0);

    double s1[3], s2[3], s3[3];
    for (int i = 1; i <= n; ++i) {
        s1[0] += pow(i, 2);
        s2[0] += pow(2 * i + 1, 3);
        s3[0] += pow(2 * i, 4);
    }

    int i = 1;
    while (i <= n) {
        s1[1] += pow(i, 2);
        s2[1] += pow(2 * i + 1, 3);
        s3[1] += pow(2 * i, 4);
        ++i;
    }

    i = 1;
    do {
        s1[2] += pow(i, 2);
        s2[2] += pow(2 * i + 1, 3);
        s3[2] += pow(2 * i, 4);
        ++i;
    } while (i <= n);

    cout << "S4 dung FOR: " << s1[0] << endl;
    cout << "S4 dung WHILE: " << s1[1] << endl;
    cout << "S4 dung DO WHILE: " << s1[2] << endl;
    cout << "S5 dung FOR: " << s2[0] << endl;
    cout << "S5 dung WHILE: " << s2[1] << endl;
    cout << "S5 dung DO WHILE: " << s2[2] << endl;
    cout << "S6 dung FOR: " << s3[0] << endl;
    cout << "S6 dung WHILE: " << s3[1] << endl;
    cout << "S6 dung DO WHILE: " << s3[2] << endl;

    cout << "\n";
    return;
}

void bai3() {
    cout << "Bai 3.\n\n";
    int n;
    do {
        cout << "Nhap gia tri n: ";
        cin >> n;
    } while (n < 0);

    if (n == 0) {
        cout << 1 << endl;
        cout << endl;
        return;
    }
    else {
        long long fac = 1;
        for (int i = 1; i <= n; ++i) {
            fac *= i;
        }
        cout << n << "! = " << fac << endl;
    }
    cout << endl;
    return;
}

void bai4() {
    cout << "Bai 4.\n\n";

    int n;
    do {
        cout << "Nhap gia tri n: ";
        cin >> n;
    } while (n <= 0);

    double s1[3], s2[3], s3[3];
    for (int i = 1; i <= n; ++i) {
        s1[0] += 1 / i;
        s2[0] += 1 / pow(i, 2);
        s3[0] += 1 / fac(i);
    }

    int i = 1;
    while (i <= n) {
        s1[1] += 1 / i;
        s2[1] += 1 / pow(i, 2);
        s3[1] += 1 / fac(i);
    }

    i = 1;
    do {
        s1[2] += 1 / i;
        s2[2] += 1 / pow(i, 2);
        s3[2] += 1 / fac(i);
    } while (i <= n);

    cout << "S7 dung FOR: " << s1[0] << endl;
    cout << "S7 dung WHILE: " << s1[1] << endl;
    cout << "S7 dung DO WHILE: " << s1[2] << endl;
    cout << "S8 dung FOR: " << s2[0] << endl;
    cout << "S8 dung WHILE: " << s2[1] << endl;
    cout << "S8 dung DO WHILE: " << s2[2] << endl;
    cout << "S9 dung FOR: " << s3[0] << endl;
    cout << "S9 dung WHILE: " << s3[1] << endl;
    cout << "S9 dung DO WHILE: " << s3[2] << endl;

    cout << "\n";
    return;
}

void bai5() {
    cout << "Bai 5.\n\n";
    int n;
    do {
        cout << "Nhap gia tri n: ";
        cin >> n;
    } while (n <= 0);

    if (n == 2 or n == 3) {
        cout << n << " la so nguyen to!\n";
        cout << "\n";
        return;
    }
    else if (n % 2 == 0) {
        cout << n << " khong phai so nguyen to!\n";
        cout << "\n";
        return;
    }
    bool flag = true;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << n << " la so nguyen to!\n";
    }
    else {
        cout << n << " khong phai so nguyen to!\n";
    }
    cout << "\n";
    return;
}

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    if (n == 2 or n == 3) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void bai6() {
    cout << "Bai 6.\n\n";

    int n;
    do {
        cout << "Nhap gia tri n: ";
        cin >> n;
    } while (n < 2);

    cout << "Cac so nguyen to be hon " << n << ": ";
    for (int i = 2; i <= n; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout <<"\n";

    cout << "\n";
    return;
}

int gcd (int a, int b) {
    return b ? gcd (b, a % b) : a;
}

void bai7() {
    cout << "Bai 7.\n\n";
    int n, m;
    do {
        cout << "Nhap gia tri n: ";
        cin >> n;
        cout << "Nhap gia tri m: ";
        cin >> m;
    } while (n <= 0 or m <= 0);

    int UCLN = gcd(n, m);
    int BCNN = n * m / UCLN;
    cout << "UCLN(n, m) = " << UCLN << endl;
    cout << "BCNN(n, m) = " << BCNN << endl;
    cout << endl;
    return;
}

void bai8() {
    cout << "Bai 8.\n\n";

    int n;
    do {
        cout << "Nhap gia tri n: ";
        cin >> n;
    } while (n < 0);

    if (n == 0 or n == 1) {
        cout << 1 << "\n\n";
        return;
    }

    long long fac = 1;
    if (n % 2 == 0) {
        for (int i = 2; i <= n; i += 2) {
            fac *= i;
        }
    }
    else {
        for (int i = 1; i <= n; i += 2) {
            fac *= 1;
        }
    }

    cout << n << "!! = " << fac << endl;

    cout << "\n";
    return;
}

void bai9() {
    cout << "Bai 9.\n\n";

    int n, k;
    do {
        cout << "Nhap gia tri n: ";
        cin >> n;
        cout << "Nhap gia tri k: ";
        cin >> k;
    } while (!(0 <= k and k <= n));

    long long res = (fac(n)) / (fac(k) * fac(n - k)); // Có thể tối ưu công thức bằng cách rút gọn =))

    cout << "CKN = " << res << endl;

    cout << "\n";
    return;
}

void bai10() {
    cout << "Bai 10.\n\n";

    int n;
    do {
        cout << "Nhap gia tri n: ";
        cin >> n;
    } while (n <= 0);

    vector < pair <int, int > > f;
    int p = 2;
    while (n > 1) {
        int cnt = 0;
        while (n % p == 0) {
            n /= p;
            ++cnt;
        }
        if (cnt != 0) f.push_back(make_pair(p, cnt));
        ++p;
    }

    cout << "n = ";
    for (int i = 0; i < (int)f.size(); ++i) {
        cout << f[i].first << "^" << f[i].second;
        if (i < (int)f.size() - 1) {
            cout << " * ";
        }
    }
    cout << "\n";

    cout << "\n";
    return;
}

void bai11() {
    cout << "Bai 11.\n\n";
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    double s = 0;
    for (int i = 1; i <= n; ++i) {
        cout << "Nhap diem cua hoc sinh thu " << i << ": ";
        double x;
        cin >> x;
        s += x;
    }
    cout << "Diem trung binh cua " << n << " hoc sinh: " << s / n << endl;
    cout << "\n";
    return;
}

void bai12() {
    cout << "Bai 12.\n\n";
    int n = 0;
    double sum = 0, val;
    do {
        cout << "Nhap gia tri bat ki: ";
        cin >> val;
        sum += val;
        ++n;
    } while (val != 9999);

    cout << "Trung binh cong cac so vua nhap: " << sum / n << endl;

    cout << "\n";
    return;
}

int main() {
    cout << fixed << setprecision(3);
    bai1();
    bai2();
    bai3();
    bai4();
    bai5();
    bai6();
    bai7();
    bai8();
    bai9();
    bai10();
    bai11();
    bai12();
    return 0;
}