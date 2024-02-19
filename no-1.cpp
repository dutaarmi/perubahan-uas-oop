#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int year;

public:
    // Constructor
    Book(std::string t, std::string a, int y) : title(t), author(a), year(y) {}

    // Method untuk menampilkan informasi lengkap buku
    void displayInfo() {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Year: " << year << std::endl;
    }

    // Method untuk menentukan apakah buku tersebut kuno atau tidak
    bool isAntique() {
        return year < 2000;
    }
};

int main() {
    // Membuat objek buku
    Book bookExample("Sample Book", "Pablo", 1995);

    // Menampilkan informasi lengkap buku
    bookExample.displayInfo();

    // Menentukan apakah buku tersebut kuno atau tidak
    if (bookExample.isAntique()) {
        std::cout << "Status: Kuno" << std::endl;
    } else {
        std::cout << "Status: Tidak Kuno" << std::endl;
    }

    return 0;
}
