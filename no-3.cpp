#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    double score;

public:
    // Constructor
    Student(std::string n, int a, double s) : name(n), age(a), score(s) {}

    // Method untuk menampilkan informasi lengkap mahasiswa
    void displayInfo() {
        std::cout << "Nama: " << name << std::endl;
        std::cout << "Usia: " << age << " tahun" << std::endl;
        std::cout << "Nilai: " << score << std::endl;
    }
};

int main() {
    // Membuat objek mahasiswa
    Student studentExample("Pragos", 20, 85.5);

    // Menampilkan informasi lengkap mahasiswa
    studentExample.displayInfo();

    return 0;
}
