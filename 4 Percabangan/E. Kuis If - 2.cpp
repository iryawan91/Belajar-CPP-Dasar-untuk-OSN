#include <iostream>
using namespace std;

int main() {
int x = 0; // Menyiapkan variabel x dengan nilai 0

// Pengecekan pertama: Apakah x kurang dari 0? (0 < 0)
if (x < 0) { 
    // Salah, maka lanjut ke pengecekan berikutnya
    cout << "x adalah negatif" << endl;
} 
// Pengecekan kedua: Apakah x lebih besar atau sama dengan 0? (0 >= 0)
else if (x >= 0) { 
    // BENAR! Program akan mencetak kalimat di bawah ini
    cout << "x adalah non-negatif" << endl;
    
    // Karena sudah ada yang benar, semua blok 'else if' dan 'else' 
    // di bawahnya akan langsung DILEWATI dan tidak akan dicek lagi.
} 
// Pengecekan ketiga: Padahal 0 juga "kurang dari atau sama dengan 0"
else if (x <= 0) { 
    // Tapi baris ini TIDAK akan dijalankan karena sudah berhenti di atas
    cout << "x adalah non-positif" << endl;
} 
// Bagian terakhir jika tidak ada satupun yang benar
else {
    cout << "selesai" << endl;
}
}
 
