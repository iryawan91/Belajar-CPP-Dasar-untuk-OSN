#include <iostream> // Library untuk input dan output
using namespace std; // Agar tidak perlu menulis std::

int main() {

    // Membuat array boolean untuk 100 lampu
    // Indeks 1 - 100 digunakan
    bool lampu[101];

    // Pada awalnya semua lampu mati (false)
    for (int i = 1; i <= 100; i++) {
        lampu[i] = false;
    }

    // Perulangan untuk setiap jam dari 1 sampai 10
    for (int p = 1; p <= 10; p++) {

        // Mengecek semua lampu dari nomor 1 sampai 100
        for (int i = 1; i <= 100; i++) {

            // Jika nomor lampu merupakan kelipatan p
            if (i % p == 0) {

                // Tekan saklar:
                // true menjadi false
                // false menjadi true
                lampu[i] = !lampu[i];
            }
        }
    }

    // Variabel untuk menghitung jumlah lampu yang menyala
    int hasil = 0;

    // Mengecek semua lampu
    for (int i = 1; i <= 100; i++) {

        // Jika lampu menyala (true)
        if (lampu[i] == true) {

            // Tambahkan hasil
            hasil++;
        }
    }

    // Menampilkan jumlah lampu yang menyala
    cout << hasil << endl;

    return 0; // Program selesai
}
