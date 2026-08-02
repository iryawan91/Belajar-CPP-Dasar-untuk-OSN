#include <iostream>
#include <cmath>
using namespace std;

int main() {

    // Variabel untuk menyimpan jumlah bebek
    int N;
    cin >> N;

    // Variabel untuk menyimpan jumlah baris (r) dan kolom (c)
    int r = 1;
    int c = N;

    // Mencari faktor terbesar yang kurang dari atau sama dengan akar N
    for (int i = 1; i <= sqrt(N); i++) {

        // Jika i merupakan faktor dari N
        if (N % i == 0) {

            // Simpan pasangan faktor
            // Pasangan terakhir akan memiliki selisih paling kecil
            r = i;
            c = N / i;
        }
    }

    // Menampilkan jumlah baris dan kolom
    cout << r << " " << c << endl;

    return 0;
}
