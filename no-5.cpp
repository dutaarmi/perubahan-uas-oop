#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    double hourlyRate;
    double hoursWorked;

public:
    // Constructor
    Employee(std::string n, double rate, double hours) : name(n), hourlyRate(rate), hoursWorked(hours) {}

    // Method untuk menghitung gaji total karyawan
    double calculateTotalSalary() {
        return hourlyRate * hoursWorked;
    }

    // Method untuk menampilkan informasi gaji karyawan
    void displaySalaryInfo() {
        std::cout << "Nama Karyawan: " << name << std::endl;
        std::cout << "Gaji per Jam: " << hourlyRate << std::endl;
        std::cout << "Jumlah Jam Kerja: " << hoursWorked << std::endl;
        std::cout << "Gaji Total: " << calculateTotalSalary() << std::endl;
    }
};

int main() {
    // Membuat objek Employee
    Employee employeeExample("John Doe", 15.0, 40.0); // Gaji per jam 15, bekerja 40 jam

    // Menampilkan informasi gaji karyawan
    employeeExample.displaySalaryInfo();

    return 0;
}
