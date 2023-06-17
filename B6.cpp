#include <iostream>

void Dichuyen(int n, char from, char to, char trunggian) {
    if (n == 1) {
        std::cout << "Di chuyen dia 1 tu " << from << " den " << to << std::endl;
        return;
    }

    Dichuyen(n - 1, from, trunggian, to);
    std::cout << "Di chuyen dia " << n << " tu " << from << " den " << to << std::endl;
    Dichuyen(n - 1, trunggian, from , to);
}

void thapHN(int n) {
    Dichuyen(n, 'A', 'C', 'B');
}

int main() {
    int soLuongDia;
    std::cout << "Nhap so luong dia: ";
    std::cin >> soLuongDia;

    thapHN(soLuongDia);

    return 0;
}
