#include <iostream> // Library untuk input dan output
using namespace std; // Agar tidak perlu menulis std::

int main() {

    // Membuat array bernama luas dengan 5 elemen bertipe integer
    int luas[5];

    // Mengisi setiap elemen array dengan hasil perkalian panjang × lebar
    luas[0] = 225 * 335; // Luas kandang ke-1
    luas[1] = 215 * 394; // Luas kandang ke-2
    luas[2] = 198 * 400; // Luas kandang ke-3
    luas[3] = 314 * 298; // Luas kandang ke-4
    luas[4] = 299 * 278; // Luas kandang ke-5

    // Variabel untuk menghitung jumlah kandang yang memenuhi syarat
    int hasil = 0;

    // Perulangan untuk mengecek semua elemen array
    for (int i = 0; i < 5; i++) {

        // Jika luas kandang minimal 80000
        if (luas[i] >= 80000) {

            // Tambahkan nilai hasil sebanyak 1
            hasil++;
        }
    }

    // Menampilkan jumlah kandang yang memenuhi syarat
    cout << hasil << endl;

    return 0; // Menandakan program selesai dengan baik
}
