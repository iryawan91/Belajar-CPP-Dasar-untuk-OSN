#include <iostream> // Library untuk input dan output
using namespace std; // Agar tidak perlu menulis std::

int main() {

    // Membuat array untuk menyimpan luas kandang
    int luas[5];

    // Mengisi array dengan luas masing-masing kandang
    luas[0] = 225 * 335;
    luas[1] = 215 * 394;
    luas[2] = 198 * 400;
    luas[3] = 314 * 298;
    luas[4] = 299 * 278;

    // Variabel untuk menyimpan luas terbesar
    // Awalnya diisi dengan luas kandang pertama
    int terbesar = luas[0];

    // Perulangan dimulai dari indeks 1
    // karena indeks 0 sudah digunakan sebagai nilai awal terbesar
    for (int i = 1; i < 5; i++) {

        // Jika luas sekarang lebih besar dari terbesar
        if (luas[i] > terbesar) {

            // Maka update nilai terbesar
            terbesar = luas[i];
        }
    }

    // Menampilkan luas terbesar
    cout << terbesar << endl;

    return 0; // Program selesai
}
