#include <iostream>
using namespace std;

// Fungsi untuk menghitung biaya pembelian bebek
int biaya(int jumlah) {

    // Menyimpan harga per ekor
    int harga_bebek;

    // Menentukan harga berdasarkan jumlah bebek
    if (jumlah < 10) {
        harga_bebek = 100000;
    } 
    else if (jumlah <= 50) {
        harga_bebek = 75000;
    } 
    else {
        harga_bebek = 50000;
    }

    // Mengembalikan total biaya
    return jumlah * harga_bebek;
}

int main() {

    // Jumlah bebek jantan selama 4 hari
    int jantan[4] = {0, 10, 50, 60};

    // Jumlah bebek betina selama 4 hari
    int betina[4] = {7, 80, 9, 40};

    // Perulangan untuk setiap hari
    for (int i = 0; i < 4; i++) {

        // Menghitung biaya bebek jantan
        int biaya_jantan = biaya(jantan[i]);

        // Menghitung biaya bebek betina
        int biaya_betina = biaya(betina[i]);

        // Menampilkan total biaya
        cout << biaya_jantan + biaya_betina << endl;
    }

    return 0;
}
