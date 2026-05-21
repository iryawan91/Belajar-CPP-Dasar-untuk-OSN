#include <iostream> // Menyertakan library iostream untuk proses input/output data (seperti perintah cout dan endl)
using namespace std; // Menggunakan namespace standar agar tidak perlu menuliskan 'std::' sebelum perintah cout atau endl

int main() { // Fungsi utama program, tempat di mana eksekusi kode C++ dimulai
    int N = 10; // Membuat variabel integer 'N' bernilai 10 sebagai ukuran panjang dan lebar bingkai persegi

    // Perulangan LUAR (Outer Loop): Mengontrol baris, variabel 'i' bergerak dari baris 1 sampai baris ke-N (10)
    for (int i = 1; i <= N; i++) { 
        
        // Perulangan DALAM (Inner Loop): Mengontrol kolom, variabel 'j' bergerak dari kolom 1 sampai kolom ke-N (10)
        for (int j = 1; j <= N; j++) { 
            
            // Logika Evaluasi Posisi Bingkai menggunakan operator OR (||):
            // i == 1  -> Apakah ini Baris Pertama? (Sisi atas bingkai)
            // i == N  -> Apakah ini Baris Terakhir? (Sisi bawah bingkai)
            // j == 1  -> Apakah ini Kolom Pertama? (Sisi kiri bingkai)
            // j == N  -> Apakah ini Kolom Terakhir? (Sisi kanan bingkai)
            if (i == 1 || i == N || j == 1 || j == N) { 
                
                // Jika salah satu saja dari 4 kondisi di atas bernilai BENAR (true), 
                // artinya posisi koordinat saat ini berada di tepian/dinding bingkai, maka cetak bintang
                cout << "*"; 
                
            } else { 
                
                // Jika keempat kondisi di atas bernilai SALAH (false), 
                // artinya posisi koordinat saat ini berada di bagian dalam/tengah persegi, maka cetak titik
                cout << "."; 
                
            } // Akhir dari blok if-else
            
        } // Akhir dari perulangan dalam (kolom 'j')
        
        cout << endl; // Membuat baris baru (pindah ke bawah) setelah selesai mencetak seluruh kolom pada baris 'i'
    } // Akhir dari perulangan luar (baris 'i')
} // Akhir dari fungsi main, menandakan program selesai berjalan
