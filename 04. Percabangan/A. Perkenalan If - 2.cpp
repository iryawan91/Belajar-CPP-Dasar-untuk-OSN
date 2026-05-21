#include <iostream> // Library untuk menampilkan output ke layar
using namespace std; // Menggunakan standar namespace agar penulisan kode lebih ringkas

int main() { // Titik awal dimulainya eksekusi program
    
    int x = 1; // Membuat variabel bulat x dan mengisi nilainya dengan 1
    
    x *= 2; // Mengalikan nilai x saat ini dengan 2 (sama dengan menulis x = x * 2)
            // Sekarang nilai x menjadi 2       
    if (x == 3) { // Mengecek kondisi: apakah nilai x sama dengan 3?
        
        // Baris di bawah ini TIDAK akan dijalankan karena x bernilai 2, bukan 3
        cout << "nilai x adalah 3" << endl; 
    }

    return 0; // Mengakhiri program
}

// b. tidak ada keluaran yang dihasilkan
