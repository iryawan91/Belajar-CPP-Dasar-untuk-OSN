#include <iostream>
using namespace std;

int main() {
int x = 5 * 5; // Menghitung hasil 5 dikali 5. Sekarang nilai x adalah 25.

// Pengecekan pertama: Apakah 25 sama dengan 10?
if (x == 10) { 
    // Salah (false), program melompat ke kondisi berikutnya.
    cout << "kwak" << endl;
} 
// Pengecekan kedua: Apakah 25 kurang dari 25?
else if (x < 25) { 
    // Salah (false), karena 25 tidak lebih kecil dari dirinya sendiri.
    cout << "kwek" << endl;
} 
// Pengecekan ketiga: Apakah 25 lebih besar dari 25?
else if (x > 25) { 
    // Salah (false), karena 25 tidak lebih besar dari 25.
    cout << "kwik" << endl;
}
}
 
 // d. tidak ada keluaran yang dihasilkan
