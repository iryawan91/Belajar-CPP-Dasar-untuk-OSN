#include <iostream>
using namespace std;

int main() {
    // Menghitung total bebek: 67 + 98 = 165
    int total_bebek = 67 + 98; 

    // Cek apakah 165 bisa dibagi habis oleh 13 (165 / 13 = 12 sisa 9)
    if (total_bebek % 13 == 0) {
        cout << 13 << endl;
    }
    // Jika tidak habis dibagi 13, cek apakah bisa dibagi habis oleh 11 (165 / 11 = 15 sisa 0)
    else if (total_bebek % 11 == 0) {
        // Karena 165 habis dibagi 11, maka baris ini dijalankan dan program akan langsung SELESAI
        cout << 11 << endl;
    }
    // Baris-baris di bawah ini akan DILEWATI karena kondisi di atas sudah terpenuhi
    else if (total_bebek % 5 == 0) {
        cout << 5 << endl;
    }
    else if (total_bebek % 3 == 0) {
        cout << 3 << endl;
    } 
    // Bagian terakhir jika tidak ada satupun kondisi di atas yang benar
    else {
        cout << 1 << endl;
    }
}
