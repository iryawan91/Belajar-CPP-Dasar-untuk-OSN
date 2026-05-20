#include <iostream> // Library untuk input dan output
using namespace std; // Agar tidak perlu menulis std::

int main() {

    // Membuat array 2 dimensi
    // 4 baris = 4 toko
    // 3 kolom = 3 merek kandang
    int luas[4][3] = {

        // Data toko ke-1
        {225 * 335, 299 * 278, 300 * 250},

        // Data toko ke-2
        {215 * 394, 144 * 718, 300 * 290},

        // Data toko ke-3
        {200 * 400, 240 * 333, 142 * 619},

        // Data toko ke-4
        {314 * 298, 411 * 198, 333 * 222}
    };

    // Variabel untuk menghitung jumlah kandang
    // yang luasnya minimal 80000
    int hasil = 0;

    // Perulangan untuk setiap toko
    for (int i = 0; i < 4; i++) {

        // Perulangan untuk setiap merek kandang
        for (int j = 0; j < 3; j++) {

            // Jika luas kandang minimal 80000
            if (luas[i][j] >= 80000) {

                // Tambahkan jumlah hasil
                hasil++;
            }
        }
    }

    // Menampilkan jumlah kandang yang memenuhi syarat
    cout << hasil << endl;

    return 0; // Program selesai
}
