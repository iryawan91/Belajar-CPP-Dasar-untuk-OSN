#include <iostream>
#include <cmath>
using namespace std;

int main() {

    // Variabel untuk menyimpan jumlah bebek
    int N;
    cin >> N;

    // Variabel untuk menyimpan jumlah baris dan kolom
    int r = 1;
    int c = N;

    // Mencari faktor terbesar yang kurang dari atau sama dengan akar N
    for (int i = 1; i <= sqrt(N); i++) {

        // Jika i adalah faktor dari N
        if (N % i == 0) {

            // Simpan pasangan faktor terbaru
            r = i;
            c = N / i;
        }
    }

    // Menampilkan hasil
    cout << r << " " << c << endl;

    return 0;
}
