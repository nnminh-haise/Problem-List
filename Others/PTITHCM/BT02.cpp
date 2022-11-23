#include <bits/stdc++.h>

using namespace std;

double sqr(double value) {
    return value * value;
}

double getDistance(pair <int, int> A, pair <int, int> B) {
    return (sqrt(sqr(A.first - B.first) + sqr(A.second - B.second)));
}

void bai1() {
    cout << "Bai 1.\n\n";
    double a, b, c;
    cout << "Nhap gia tri a: ";
    cin >> a;
    cout << "Nhap gia tri b: ";
    cin >> b;
    cout << "Nhap gia tri c: ";
    cin >> c;
    if (a + b > c and b + c > a and a + c > b) {
        double p = (a + b + c) / 2;
        double s = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << "Dien tich tam giac: " << s << endl;
        cout << "Chu vi tam giac: " << a + b + c << endl;
    }
    else {
        cout << "Day khong phai kich thuoc cua tam giac!\n";
    }
    cout << endl;
    return;
}

void bai2() {
    cout << "Bai 2.\n\n";
    double x1, y1, x2, y2;
    cout << "Nhap hoanh do diem A: ";
    cin >> x1;
    cout << "Nhap tung do diem A: ";
    cin >> y1;
    cout << "Nhap hoanh do diem B: ";
    cin >> x2;
    cout << "Nhap tung do diem B: ";
    cin >> y2;
    double xI = (x1 + x2) / 2, yI = (y1 + y2) / 2;
    cout << "Hoanh do trung diem: " << xI << endl;
    cout << "Tung do trung diem: " << yI << endl;
    cout << "Do dai doan thang AB: " << getDistance(make_pair(x1, y1), make_pair(x2, y2)) << endl;
    cout << endl;
    return;
}

void bai3() {
    cout << "Bai 3.\n\n";
    pair <int, int> A, B, C, G;
    cout << "Nhap hoanh do diem A: ";
    cin >> A.first;
    cout << "Nhap tung do diem A: ";
    cin >> A.second;
    cout << "Nhap hoanh do diem B: ";
    cin >> B.first;
    cout << "Nhap tung do diem B: ";
    cin >> B.second;
    cout << "Nhap hoanh do diem C: ";
    cin >> C.first;
    cout << "Nhap tung do diem C: ";
    cin >> C.second;
    G.first = (A.first + B.first + C.first) / 3;
    G.second = (A.second + B.second + C.second) / 3;
    cout << "Hoanh do trong tam: " << G.first << endl;
    cout << "Tung do trong tam: " << G.second << endl;
    double area = 1 / 2 * abs((B.first - A.first) * (C.second - A.second) - (C.first - A.first) * (B.second - A.second));
    cout << "Dien tich tam giac: " << area << endl;
    double AB = getDistance(A, B), AC = getDistance(A, C), BC = getDistance(B, C);
    cout << "Chu vi tam giac: " << AB + AC + BC << endl;
    cout << endl;
    return;
}

void bai4() {
    cout << "Bai 4.\n\n";
    double a, b;
    cout << "Nhap gia tri a: ";
    cin >> a;
    cout << "Nhap gia tri b: ";
    cin >> b;
    if (a == 0 and b == 0) {
        cout << "Phuong trinh co vo so nghiem!\n";
    }
    else if (a == 0 and b != 0) {
        cout << "Phuong trinh vo nghiem!\n";
    }
    else if (a != 0) {
        double x = -b / a;
        cout << "Nghiem x: " << x << endl;
    }
    cout << endl;
    return;
}

void bai5() {
    cout << "Bai 5.\n\n";
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
            double x = -b / (2 * a);
            cout << "Phuong trinh co duy nhat nghiem x = " << x << endl;
        }
        else {
            double x1 = (-b + sqrt(delta)) / (2 * a), x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Nghiem x1 = " << x1 << endl;
            cout << "Nghiem x2 = " << x2 << endl;
        }
    }
    cout << endl;
    return;
}

void bai6() {
    cout << "Bai 6.\n\n";
    double val;
    cout << "Nhap so KW dien tieu thu: ";
    cin >> val;
    cout << "Tien dien: ";
    if (val > 0 and val <= 100) {
        cout << val * 2000 << endl;
    }
    else if (val >= 101 and val <= 200) {
        cout << val * 2500 << endl;
    }
    else if (val >= 201 and val <= 300) {
        cout << val * 3000 << endl;
    }
    else {
        cout << val * 5000 << endl;
    }
    cout << endl;
    return;
}

void bai7() {
    cout << "Bai 7.\n\n";
    int TNCT;
    cout << "Nhap tham nien cong tac: ";
    cin >> TNCT;
    double heso;
    if (TNCT < 12) heso = 1.92;
    else if (TNCT < 36) heso = 2.34;
    else if (TNCT < 60) heso = 3;
    else heso = 4.5;
    double luong = heso * 650000;
    cout << "Luong: " << luong << endl;
    cout << endl;
    return;
}

void bai8() {
    cout << "Bai 8.\n\n";
    int gioBatDau, gioKetThuc;
    cout << "Nhap gio bat dau: ";
    cin >> gioBatDau;
    cout << "Nhap gio ket thuc: ";
    cin >> gioKetThuc;
    int thoiGian = gioBatDau - gioKetThuc + 1;
    long long tien;
    if (thoiGian <= 3) {
        tien = thoiGian * 30000;
    }
    else {
        tien = (90000) + (thoiGian - 3) * 27000;
    }
    if (thoiGian >= 8 and thoiGian <= 17) {
        tien = tien - tien * 10 / 100;
    }
    cout << "Thanh tien: " << tien << endl;
    cout << endl;
    return;
}

void bai9() {
    cout << "Bai 9.\n\n";
    char A, B;
    cout << "Nhap lua chon nguoi choi A: ";
    cin >> A;
    cout << "Nhap lua chon nguoi choi B: ";
    cin >> B;
    if (A == B) {
        cout << "Hoa!\n";
        return;
    }
    if (A == 'B' and B == 'O') {
        cout << "Nguoi choi B thang!\n";
    }
    else if (A == 'B' and B == 'K') {
        cout << "Nguoi choi A thang!\n";
    }
    else if (A == 'O' and B == 'K') {
        cout << "Nguoi choi B thang!\n";
    }
    else if (A == 'O' and B == 'B') {
        cout << "Nguoi choi A thang!\n";
    }
    else if (A == 'K' and B == 'B') {
        cout << "Nguoi choi B thang!\n";
    }
    else if (A == 'K' and B == 'O') {
        cout << "Nguoi choi A thang!\n";
    }
    cout << endl;
    return;
}

void bai10() {
    cout << "Bai 10.\n\n";
    int val;
    do {
        cout << "Nhap thu trong tuan: ";
        cin >> val;
    } while (!(val >= 1 and val <= 7));

    if (val == 1) {
        cout << "Sunday!\n";
    }
    else if (val == 2) {
        cout << "Monday!\n";
    }
    else if (val == 3) {
        cout << "Tuesday!\n";
    }
    else if (val == 4) {
        cout << "Wednesday!\n";
    }
    else if (val == 5) {
        cout << "Thursday!\n";
    }
    else if (val == 6) {
        cout << "Friday!\n";
    }
    else if (val == 7) {
        cout << "Saturday!\n";
    }
    cout << endl;
    return;
}

void bai11() {
    cout << "Bai 11.\n\n";
    int val;
    do {
        cout << "Nhap thang trong nam: ";
        cin >> val;
    } while (!(val >= 1 and val <= 12));

    switch (val)
    {
    case (1):
        cout << "January\n";
        break;
    case (2):
        cout << "Ferbuary\n";
        break;
    case (3):
        cout << "March\n";
        break;
    case (4):
        cout << "April\n";
        break;
    case (5):
        cout << "May\n";
        break;
    case (6):
        cout << "June\n";
        break;
    case (7):
        cout << "July\n";
        break;
    case (8):
        cout << "August\n";
        break;
    case (9):
        cout << "September\n";
        break;
    case (10):
        cout << "October\n";
        break;
    case (11):
        cout << "November\n";
        break;
    default:
        cout << "December\n";
    }

    cout << endl;
    return;
}

void bai12() {
    cout << "Bai 12.\n\n";
    int val;
    do {
        cout << "Nhap thang trong nam: ";
        cin >> val;
    } while (!(val >= 1 and val <= 12));

    switch (val)
    {
    case (12):
    case (1):
    case (2):
        cout << "Winter\n";
        break;
    case (3):
    case (4):
    case (5):
        cout << "Spring\n";
        break;
    case (6):
    case (7):
    case (8):
        cout << "Summer\n";
    default:
        cout << "Autumn\n";
    }

    cout << endl;
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