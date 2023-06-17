#include <iostream>
#include <vector>

using namespace std;

// Hàm tính giá trị đa thức theo phương pháp Horner
// Đa thức a*x^0+ b*x^1 + c*x^2 +...+m*x^n
double horner(vector<double>& heso, double x) {
    double kq = 0;
    int sobac= heso.size() - 1;

    for (int i = sobac; i >= 0; i--) {
        kq = kq * x + heso[i];
    }

    return kq;
}

int main() {
    int sobac;
    cout << "Nhap bac cua da thuc: ";
    cin >> sobac;

    vector<double> heso(sobac + 1);
    for (int i = 0; i <= sobac; i++) {
        cout << "Nhap he so cua bac " << i << ": ";
        cin >> heso[i];
    }

    double x;
    cout << "Nhap gia tri x: ";
    cin >> x;

    double kq = horner(heso, x);
    cout << "Gia tri cua da thuc bac "<<sobac<<" tai x = " << x << " la: " << kq << endl;

    return 0;
}
