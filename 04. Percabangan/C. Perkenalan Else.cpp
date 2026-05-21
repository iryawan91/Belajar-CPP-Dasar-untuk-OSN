#include <iostream> // Library untuk fungsi input/output
using namespace std; // Mempermudah penulisan syntax

int main() {
    // Menghitung total bebek: 67 + 98 = 165
    int total_bebek = 67 + 98; 

    // Mengecek apakah total_bebek habis dibagi 2 (bilangan genap)
    if (total_bebek % 2 == 0) {
        // Jika sisa baginya 0, jalankan baris ini
        cout << "total banyaknya bebek adalah bilangan genap" << endl;
    } 
    else {
        // Jika kondisi di atas salah (sisa bagi bukan 0), jalankan baris ini
        // Karena 165 % 2 = 1 (ganjil), maka baris ini yang akan dieksekusi
        cout << "total banyaknya bebek adalah bilangan ganjil" << endl;
    }

    return 0; // Standar penutupan fungsi main
}
