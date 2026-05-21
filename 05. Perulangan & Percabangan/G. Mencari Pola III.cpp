#include <iostream> // Menyertakan library iostream untuk proses input/output data (seperti perintah cout dan endl)
using namespace std; // Menggunakan namespace standar agar tidak perlu menuliskan 'std::' sebelum perintah cout atau endl

int main() { // Fungsi utama program, tempat di mana eksekusi kode C++ dimulai
    int N = 10; // Membuat variabel integer 'N' bernilai 10 sebagai ukuran dimensi panjang dan lebar pola

    // Perulangan LUAR (Outer Loop): Mengontrol baris, variabel 'i' bergerak dari baris 1 sampai baris ke-N (10)
    for (int i = 1; i <= N; i++) { 
        
        // Perulangan DALAM (Inner Loop): Mengontrol kolom, variabel 'j' bergerak dari kolom 1 sampai kolom ke-N (10)
        for (int j = 1; j <= N; j++) { 
            
            // Logika Evaluasi Garis Diagonal menggunakan operator OR (||):
            // i == j          -> Apakah nomor baris sama dengan nomor kolom? (Garis diagonal utama dari kiri-atas ke kanan-bawah)
            // i + j == N + 1  -> Apakah penjumlahan baris dan kolom menghasilkan N + 1 (11)? (Garis diagonal sekunder dari kanan-atas ke kiri-bawah)
            if (i == j || i + j == N + 1) { 
                
                // Jika salah satu dari dua kondisi matematika di atas terpenuhi (bernilai true), cetak bintang
                cout << "*"; 
                
            } else { 
                
                // Jika posisi (i, j) tidak berada di jalur kedua diagonal tersebut, cetak titik
                cout << "."; 
                
            } // Akhir dari blok if-else
            
        } // Akhir dari perulangan dalam (kolom 'j')

        cout << endl; // Membuat baris baru (pindah ke bawah) setelah selesai mencetak seluruh kolom pada baris 'i'
    } // Akhir dari perulangan luar (baris 'i')
} // Akhir dari fungsi main, menandakan program selesai berjalan
