#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

void bai1() {
    cout << "Bai 1.\n\n";
    cout << "Chao Ban!\n";
    cout << "Toi ten la Nguyen Van A.\n";
    cout << "MSSV la: D12CQCN01-N.\n";
    cout << "So dien thoai la: 01234567890.\n";
    cout << "\n";
    return;
}

void bai2() {
    cout << "Bai 2.\n\n";
    double I, R;
    cout << "Nhap cuong do dong dien I: ";
    cin >> I;
    cout << "Nhap dien tro R: ";
    cin >> R;
    double V = I * R;
    cout << "Gia tri dien the V: " << V << endl;
    cout << "\n";
    return;
}

void bai3() {
    cout << "Bai 3.\n\n";
    double a, b, c;
    cout << "Nhap gia tri cua so thu nhat: ";
    cin >> a;
    cout << "Nhap gia tri cua so thu hai: ";
    cin >> b;
    cout << "Nhap gia tri cua so thu ba: ";
    cin >> c;
    double average = (a + b + c) / 3;
    cout << "Trung binh cong ba so tren: " << average << endl;
    cout << "\n";
    return;
}

void bai4() {
    cout << "Bai 4.\n\n";
    double Toan, Van, Li, Hoa, Anh, Sinh;
    cout << "Nhap diem Toan: ";
    cin >> Toan;
    cout << "Nhap diem Van: ";
    cin >> Van;
    cout << "Nhap diem Ly: ";
    cin >> Li;
    cout << "Nhap diem Anh: ";
    cin >> Anh;
    cout << "Nhap diem Sinh: ";
    cin >> Sinh;
    cout << "Nhap diem Hoa: ";
    cin >> Hoa;
    double average = (Toan * 3 + (Van + Li + Anh) * 2 + Sinh + Hoa) / 11;
    cout << "Trung binh cuoi nam: " << average << endl;
    cout << "\n";
    return;
}

void bai5() {
    cout << "Bai 5.\n\n";
    double a, b;
    cout << "Nhap gia tri so thu nhat: ";
    cin >> a;
    cout << "Nhap gia tri so thu hai: ";
    cin >> b;
    cout << "Tong hai gia tri: " << a + b << endl;
    cout << "Hieu hai gia tri: " << a - b << endl;
    cout << "Tich hai gia tri: " << a * b << endl;
    if (b != 0) {
        cout << "Thuong hai gia tri: " << a / b << endl;
    }
    cout << "Gia tri trung binh: " << (a + b) / 2 << endl;
    cout << "\n";
    return;
}

void bai6() {
    cout << "Bai 6.\n\n";
    const double PI = 3.14;
    double r;
    cout << "Nhap ban kinh cua hinh tron: ";
    cin >> r;
    double chuvi = 2 * PI * r, dientich = PI * r * r;
    cout << "Chu vi hinh tron: " << chuvi << endl;
    cout << "Dien tich hinh tron: " << dientich << endl;

    double area;
    cout << "Nhap dien tich cua hinh tron: ";
    cin >> area;
    double r2 = sqrt(area / PI);
    cout << "Ban kinh cua hinh tron: " << r2 << endl;
    cout << "\n";
    return;
}

void bai7() {
    cout << "Bai 7.\n\n";
    double dayLon, dayNho, chieuCao;
    cout << "Nhap kich thuoc day lon: ";
    cin >> dayLon;
    cout << "Nhap kich thuoc day nho: ";
    cin >> dayNho;
    cout << "Nhap chieu cao: ";
    cin >> chieuCao;
    double area = (dayLon + dayNho) * chieuCao / 2;
    cout << "Dien tich hinh thang: " << area << endl;
    cout << "\n";
    return;
}

double sqr(double value) {
    return value * value;
}

double cube(double value) {
    return value * value * value;
}

void bai8() {
    cout << "Bai 8.\n\n";
    const double E = 2.71828;
    double x;
    cout << "Nhap gia tri x: ";
    cin >> x;

    double y1 = 2 * cube(x) + 2 * sqr(x) + 7 * x + 15;
    double y2 = sqr(sin(x)) + sqr(cos(2 * x)) + sqr(tan(3 * x));
    double y3 = pow(x + 1, x + 5);
    double y4 = 3 * pow(E, cos(x + 1));
    double y5 = log10(x + 10) / log10(E);
    cout << "Gia tri y1: " << y1 << endl;
    cout << "Gia tri y2: " << y2 << endl;
    cout << "Gia tri y3: " << y3 << endl;
    cout << "Gia tri y4: " << y4 << endl;
    cout << "Gia tri y5: " << y5 << endl;
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
    return 0;
}