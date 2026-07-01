#include <iostream>
using namespace std;

// Fungsi untuk menghitung biaya pembelian bebek
int biaya(int total_bebek) {

    // Variabel harus dideklarasikan di luar if agar dapat digunakan sampai akhir fungsi
    int harga_bebek;

    // Menentukan harga per ekor
    if (total_bebek < 10) {
        harga_bebek = 100000;
    }
    else if (total_bebek <= 50) {
        harga_bebek = 75000;
    }
    else {
        harga_bebek = 50000;
    }

    // Mengembalikan total biaya
    return harga_bebek * total_bebek;
}

// Fungsi untuk menghitung total biaya jantan dan betina
int biaya_jantan_dan_betina(int jantan, int betina) {

    // Memanggil fungsi biaya() untuk masing-masing jenis bebek
    return biaya(jantan) + biaya(betina);
}

int main() {

    // Data jumlah bebek jantan
    int jantan[4] = {0, 10, 50, 60};

    // Data jumlah bebek betina
    int betina[4] = {7, 80, 9, 40};

    // Menghitung total biaya selama 4 hari
    for (int i = 0; i < 4; i++) {

        // Menampilkan total biaya setiap hari
        cout << biaya_jantan_dan_betina(jantan[i], betina[i]) << endl;
    }

    return 0;
}
