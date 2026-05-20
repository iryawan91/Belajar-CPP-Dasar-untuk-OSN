#include <iostream> // Library untuk input dan output
using namespace std; // Agar tidak perlu menulis std::

int main() {

    // Array 2 dimensi untuk menyimpan luas kandang
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

    // Array harga jual per cm persegi untuk setiap merek
    int harga_jual[3] = {100, 120, 150};

    // Perulangan untuk setiap merek kandang
    for (int j = 0; j < 3; j++) {

        // Variabel untuk menyimpan total penjualan tiap merek
        int total = 0;

        // Perulangan untuk setiap toko
        for (int i = 0; i < 4; i++) {

            // Menghitung total penjualan:
            // luas kandang × harga jual per cm persegi
            total = total + (luas[i][j] * harga_jual[j]);
        }

        // Menampilkan total penjualan untuk merek tersebut
        cout << total << endl;
    }

    return 0; // Program selesai
}
