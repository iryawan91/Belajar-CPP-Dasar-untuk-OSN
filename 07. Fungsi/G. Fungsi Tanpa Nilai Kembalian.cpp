#include <iostream>
using namespace std;

// Jumlah kandang
int total_kandang = 10;

// bebek[i] menyatakan jumlah bebek pada kandang ke-i
int bebek[11];

// Fungsi untuk mengosongkan semua kandang
void kosongkan_kandang() {
    for (int i = 1; i <= total_kandang; i++) {
        bebek[i] = 0;
    }
}

// Fungsi untuk mengisi bebek ke beberapa kandang
void isi_bebek_ke_dalam_kandang(int awal, int akhir, int jumlah) {

    // Mengisi kandang dari nomor awal sampai akhir
    for (int i = awal; i <= akhir; i++) {

        // Menambahkan jumlah bebek ke kandang
        bebek[i] += jumlah;
    }
}

// Fungsi untuk mencari kandang dengan jumlah bebek terbanyak
int bebek_terbanyak_dalam_suatu_kandang() {

    // Anggap kandang pertama memiliki bebek terbanyak
    int bebek_terbanyak = bebek[1];

    // Membandingkan dengan kandang lainnya
    for (int i = 2; i <= total_kandang; i++) {

        // Mengambil nilai terbesar
        bebek_terbanyak = max(bebek_terbanyak, bebek[i]);
    }

    // Mengembalikan jumlah bebek terbanyak
    return bebek_terbanyak;
}

int main() {

    // Mengosongkan semua kandang
    kosongkan_kandang();

    // Mengisi bebek sesuai soal
    isi_bebek_ke_dalam_kandang(1, 8, 2);
    isi_bebek_ke_dalam_kandang(2, 9, 10);
    isi_bebek_ke_dalam_kandang(5, 6, 2);
    isi_bebek_ke_dalam_kandang(9, 10, 3);
    isi_bebek_ke_dalam_kandang(1, 4, 7);
    isi_bebek_ke_dalam_kandang(1, 4, 2);
    isi_bebek_ke_dalam_kandang(4, 8, 6);

    // Menampilkan jumlah bebek terbanyak
    cout << bebek_terbanyak_dalam_suatu_kandang() << endl;

    return 0;
}
