#include <iostream>
using namespace std;

int main() {
    double USDrate = 0.000042;  // Tỷ giá VND sang USD
    double EUROrate = 0.000039;     // Tỷ giá VND sang EURO
    double NDTrate = 0.00030;     // Tỷ giá VND sang NDT
    double BArate = 0.000033;     // Tỷ giá VND sang BANG ANH
    double YENrate = 0.0060;     // Tỷ giá VND sang YEN NHAT

    double tiencandoi;
    char tiente;

    cout << "Xin moi nhap so tien can doi: ";
    cin >> tiencandoi;

    cout << "Xin moi chon loai tien te can chuyen doi (NDT, BANG ANH, USD, EURO, YEN): ";
    cin >> tiente;

    double Soluongdoi;

    if (tiente == 'N' || tiente == 'n') {
        Soluongdoi = tiencandoi * NDTrate;
        cout << "So tien sau khi doi sang NDT la: " << Soluongdoi << " NDT" << endl;
    }
    else if (tiente == 'B' || tiente == 'b') {
        Soluongdoi = tiencandoi * BArate;
        cout << "So tien sau khi doi sang Bang Anh la: " << Soluongdoi << " Bang anh" << endl;
    }
    else if (tiente == 'E' || tiente == 'e') {
        Soluongdoi = tiencandoi * EUROrate;
        cout << "So tien sau khi doi sang Euro la: " << Soluongdoi << " Euro" << endl;
    }
    else if (tiente == 'U' || tiente == 'u') {
        Soluongdoi = tiencandoi * USDrate;
        cout << "So tien sau khi doi sang USD la: " << Soluongdoi << " USD" << endl;
    }
    else if (tiente == 'Y' || tiente == 'y') {
        Soluongdoi = tiencandoi * YENrate;
        cout << "So tien sau khi doi sang Yen Nhat la: " << Soluongdoi << " Yen Nhat" << endl;
    }
    else {
        cout << "Loai tien te khong hop le!" << endl;
    }

    return 0;
}
