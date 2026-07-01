#include <iostream>
using namespace std;

// Data jumlah bebek jantan
int jantan[4] = {0, 10, 50, 60};

// Data jumlah bebek betina
int betina[4] = {7, 80, 9, 40};

// Fungsi untuk menghitung selisih dua bilangan
int selisih(int a, int b) {

    // Jika a lebih besar dari b
    if (a > b) {
        return a - b;

    // Jika b lebih besar atau sama dengan a
    } else {
        return b - a;
    }
}

// Fungsi untuk menghitung denda pada hari tertentu
int denda_pada_hari(int hari) {

    // Denda = 1000 × selisih jumlah bebek
    return 1000 * selisih(jantan[hari], betina[hari]);
}

// Fungsi untuk menghitung total denda selama 4 hari
int total_denda() {

    // Variabel untuk menyimpan total denda
    int total = 0;

    // Perulangan selama 4 hari
    for (int i = 0; i < 4; i++) {

        // Menambahkan denda setiap hari ke total
        total += denda_pada_hari(i);
    }

    // Mengembalikan total denda
    return total;
}

int main() {

    // Menampilkan total denda
    cout << total_denda() << endl;

    return 0;
}
