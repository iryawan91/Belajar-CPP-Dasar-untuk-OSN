#include <iostream>

using namespace std;

int main() {

    // Data jumlah bebek jantan setiap hari
    int jantan[4] = {0, 10, 50, 60};

    // Data jumlah bebek betina setiap hari
    int betina[4] = {7, 80, 9, 40};

    // Perulangan untuk 4 hari
    for (int i = 0; i < 4; i++) {

        // Variabel untuk menyimpan harga per ekor
        int harga_bebek;

        // ===============================
        // Menghitung biaya bebek jantan
        // ===============================

        // Jika jumlah kurang dari 10 ekor
        if (jantan[i] < 10) {
            harga_bebek = 100000;

        // Jika jumlah antara 10 sampai 50 ekor
        } else if (jantan[i] <= 50) {
            harga_bebek = 75000;

        // Jika jumlah lebih dari 50 ekor
        } else {
            harga_bebek = 50000;
        }

        // Menghitung total biaya bebek jantan
        int biaya_jantan = jantan[i] * harga_bebek;


        // ===============================
        // Menghitung biaya bebek betina
        // ===============================

        // Jika jumlah kurang dari 10 ekor
        if (betina[i] < 10) {
            harga_bebek = 100000;

        // Jika jumlah antara 10 sampai 50 ekor
        } else if (betina[i] <= 50) {
            harga_bebek = 75000;

        // Jika jumlah lebih dari 50 ekor
        } else {
            harga_bebek = 50000;
        }

        // Menghitung total biaya bebek betina
        int biaya_betina = betina[i] * harga_bebek;


        // ===============================
        // Menampilkan total biaya
        // ===============================
        cout << biaya_jantan + biaya_betina << endl;
    }

    return 0;
}
