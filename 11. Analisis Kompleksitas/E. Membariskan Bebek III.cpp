#include <iostream>
#include <cmath>
using namespace std;

int main() {

    // Variabel untuk menyimpan jumlah bebek
    // Menggunakan long long karena N dapat mencapai 10^12
    long long N;
    cin >> N;

    // Variabel untuk menyimpan jumlah baris (r) dan kolom (c)
    long long r = 1;
    long long c = N;

    // Mencari faktor terbesar yang kurang dari atau sama dengan akar N
    for (long long i = 1; i * i <= N; i++) {

        // Jika i adalah faktor dari N
        if (N % i == 0) {

            // Simpan pasangan faktor
            r = i;
            c = N / i;
        }
    }

    // Menampilkan hasil
    cout << r << " " << c << endl;

    return 0;
}
