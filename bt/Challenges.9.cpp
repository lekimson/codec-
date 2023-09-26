#include <iostream>

int main() {
    int numFloors;
    int totalRooms = 0;
    int occupiedRooms = 0;

    // Nhap so luong tang
    do {
        std::cout << "Khach san co bao nhieu tang? ";
        std::cin >> numFloors;

        if (numFloors < 1) {
            std::cout << "So luong tang khong hop le. Vui long nhap mot gia tri lon hon hoac bang 1." << std::endl;
        }
    } while (numFloors < 1);

    // Lap cho moi tang
    for (int floor = 1; floor <= numFloors; floor++) {
        int numRooms;

        // Nhap so luong phong tren tang
        do {
            std::cout << "Co bao nhieu phong tren tang " << floor << "? ";
            std::cin >> numRooms;

            if (numRooms < 10) {
                std::cout << "So luong phong khong hop le. Vui long nhap mot gia tri lon hon hoac bang 10." << std::endl;
            }
        } while (numRooms < 10);

        totalRooms += numRooms;

        int occupied;

        // Nhap so luong phong da su dung tren tang
        do {
            std::cout << "Co bao nhieu phong da duoc su dung tren tang " << floor << "? ";
            std::cin >> occupied;

            if (occupied < 0 || occupied > numRooms) {
                std::cout << "So luong phong da su dung khong hop le. Vui long nhap mot gia tri tu 0 den " << numRooms << "." << std::endl;
            }
        } while (occupied < 0 || occupied > numRooms);

        occupiedRooms += occupied;
    }

    // Tinh toan ty le phong duoc su dung
    int unoccupiedRooms = totalRooms - occupiedRooms;
    double occupancyRate = (static_cast<double>(occupiedRooms) / totalRooms) * 100;

    // Hien thi ket qua
    std::cout << "Tong so phong trong khach san: " << totalRooms << std::endl;
    std::cout << "So luong phong da duoc su dung: " << occupiedRooms << std::endl;
    std::cout << "So luong phong trong: " << unoccupiedRooms << std::endl;
    std::cout << "Ty le phong duoc su dung: " << occupancyRate << "%" << std::endl;

    return 0;
}