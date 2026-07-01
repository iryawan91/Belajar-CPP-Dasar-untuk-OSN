#include <iostream>
using namespace std;

// Fungsi void (tidak mengembalikan nilai)
void sapaan(string nama) {
    cout << "Halo, selamat datang " << nama << "!" << endl;
}

// Fungsi dengan nilai balik (mengembalikan int)
int tambah(int a, int b) {
    return a + b;
}

int main() {
    // Memanggil fungsi void
    sapaan("Dede");

    // Memanggil fungsi dengan nilai balik
    int hasil = tambah(10, 5);
    cout << "Hasil penjumlahan: " << hasil << endl;

    return 0;
}
