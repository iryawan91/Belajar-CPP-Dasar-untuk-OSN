#include <iostream>  // Menyertakan library iostream untuk proses input/output data (seperti perintah cout)
using namespace std; // Menggunakan namespace standar agar tidak perlu menuliskan 'std::' sebelum perintah cout

int main() {  // Fungsi utama program, tempat di mana eksekusi kode C++ dimulai
  int n = 47; // Membuat variabel integer 'n' dan memberikan nilai awal 47
  
  // Perulangan WHILE (TRUE): Membuat perulangan tak terbatas (infinite loop) 
  // karena kondisinya selalu bernilai benar (true). Perulangan ini hanya akan berhenti jika menemui perintah 'break'.
  while (true) {
      
    // Memeriksa apakah nilai 'n' sudah mengecil hingga mencapai angka 0
    if (n == 0) {
        
        break; // Jika n sama dengan 0, HENTIKAN seluruh perulangan saat itu juga dan keluar dari blok while
        
    } // Akhir dari blok pengecekan kondisi if
    
    cout << "*"; // Mencetak satu karakter bintang ke layar (tanpa membuat baris baru)
    
    // Membagi nilai 'n' dengan angka 10. Karena 'n' bertipe integer (bilangan bulat), 
    // hasil pembagian yang berupa desimal/koma akan langsung dipotong (dibuang).
    n = n / 10; 
    
  } // Akhir dari blok perulangan while, program akan melompat kembali ke atas untuk mengecek kondisi perulangan
} // Akhir dari fungsi main, menandakan program selesai berjalan
