#include <iostream> // Menyertakan library iostream untuk proses input/output data (seperti perintah cout dan endl)
using namespace std; // Menggunakan namespace standar agar tidak perlu menuliskan 'std::' sebelum perintah cout atau endl

int main() { // Fungsi utama program, tempat di mana eksekusi kode C++ dimulai
    int N = 10; // Membuat variabel integer 'N' bernilai 10 sebagai dimensi ukuran panjang dan lebar pola

    // Perulangan LUAR (Outer Loop): Mengontrol baris, variabel 'i' bergerak dari baris 1 sampai baris ke-N (10)
    for (int i = 1; i <= N; i++) { 
        
        // PERULANGAN DALAM PERTAMA: Bertugas mencetak karakter bintang ('*')
        // Jumlah bintang yang dicetak pada setiap baris akan SAMA dengan nomor barisnya saat itu (sebanyak 'i' kali)
        for (int j = 1; j <= i; j++) { 
            cout << "*"; // Mencetak satu karakter bintang ke layar tanpa membuat baris baru
        }

        // PERULANGAN DALAM KEDUA: Bertugas mencetak karakter titik ('.') untuk memenuhi sisa kolom
        // Jumlah titik yang dicetak adalah sisa dimensi persegi pada baris tersebut, yaitu sebanyak 'N - i' kali
        for (int j = 1; j <= N - i; j++) { 
            cout << "."; // Mencetak satu karakter titik ke layar tanpa membuat baris baru
        }

        cout << endl; // Membuat baris baru (pindah ke baris berikutnya) setelah semua bintang dan titik pada baris 'i' selesai dicetak
    } // Akhir dari perulangan luar (outer loop)
} // Akhir dari fungsi main, menandakan program selesai berjalan
