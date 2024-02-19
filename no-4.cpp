#include <iostream>
#include <string>

class BankAccount {
private:
    std::string owner;
    double balance;

public:
    // Constructor
    BankAccount(std::string o, double b) : owner(o), balance(b) {}

    // Method untuk melakukan penyetoran uang
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Berhasil melakukan penyetoran sebesar " << amount << " ke akun " << owner << ". Saldo terkini: " << balance << std::endl;
        } else {
            std::cout << "Jumlah penyetoran harus lebih dari 0." << std::endl;
        }
    }

    // Method untuk melakukan penarikan uang
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Berhasil melakukan penarikan sebesar " << amount << " dari akun " << owner << ". Saldo terkini: " << balance << std::endl;
        } else {
            std::cout << "Jumlah penarikan tidak valid atau melebihi saldo." << std::endl;
        }
    }

    // Method untuk menampilkan saldo terkini
    void displayBalance() {
        std::cout << "Saldo akun " << owner << ": " << balance << std::endl;
    }
};

int main() {
    // Membuat objek BankAccount
    BankAccount account("kimak", 1000.0);

    // Melakukan beberapa penyetoran dan penarikan uang
    account.deposit(500.0);
    account.withdraw(200.0);
    account.deposit(100.0);
    account.withdraw(1200.0);

    // Menampilkan saldo terkini
    account.displayBalance();

    return 0;
}
