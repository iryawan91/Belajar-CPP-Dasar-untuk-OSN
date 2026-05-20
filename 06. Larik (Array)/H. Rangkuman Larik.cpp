#include <iostream> // Library untuk input dan output
using namespace std; // Agar tidak perlu menulis std::

int main() {

    // Membuat array bernama data dengan 10 elemen
    int data[10] = {1, 1, 3, 4, 3, 3, 3, 9, 1, 9};

    // Variabel untuk menghitung jumlah pasangan angka yang sama
    int hasil = 0;

    // Perulangan dari indeks 0 sampai 8
    // Mengapa sampai 8?
    // Karena program membandingkan data[i] dengan data[i+1]
    // Jika i = 9, maka data[10] akan error (di luar array)
    for (int i = 0; i < 9; i++) {

        // Mengecek apakah elemen sekarang sama
        // dengan elemen setelahnya
        if (data[i] == data[i+1]) {

            // Jika sama, tambahkan nilai hasil
            hasil++;
        }
    }

    // Menampilkan jumlah pasangan angka yang sama
    cout << hasil << endl;

    return 0; // Menandakan program selesai
}
