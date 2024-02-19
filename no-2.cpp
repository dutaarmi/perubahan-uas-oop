#include <iostream>

class Car {
private:
    std::string brand;
    int year;
    double speed; // dalam km/jam

public:
    // Constructor
    Car(std::string b, int y, double s) : brand(b), year(y), speed(s) {}

    // Method untuk menghitung waktu yang dibutuhkan untuk menempuh jarak tertentu
    double calculateTime(double distance) {
        return distance / speed; // Waktu = Jarak / Kecepatan
    }
};

int main() {
    // Membuat objek mobil
    Car carExample("Toyota", 2020, 60.0);

    // Menghitung waktu yang dibutuhkan untuk menempuh jarak 100 km dengan kecepatan 60 km/jam
    double distanceToTravel = 100.0;
    double timeRequired = carExample.calculateTime(distanceToTravel);

    // Menampilkan informasi waktu yang dibutuhkan
    std::cout << "Mobil " << carExample.calculateTime << " dengan kecepatan " << carExample.speed << " km/jam akan menempuh jarak " << distanceToTravel << " km dalam waktu " << timeRequired << " jam." << std::endl;

    return 0;
}
