#include <iostream>   
using namespace std;  

int main() {   
   // Perulangan LUAR (Outer Loop): Variabel 'i' bergerak dari angka 1 sampai 4
   for (int i = 1; i <= 4; i++) {
       
    // Memeriksa apakah nilai 'i' saat ini adalah bilangan genap (habis dibagi 2)
    if (i % 2 == 0) {
        
        continue; // LEWATI seluruh sisa kode di bawahnya untuk iterasi 'i' ini, lalu langsung lompat ke i++ berikutnya
        
    } // Akhir dari blok if untuk check nilai i genap
    
    // Perulangan DALAM (Inner Loop): Variabel 'j' bergerak mulai dari 1 sampai batas nilai 'i' saat itu.
    // Catatan: Perulangan ini HANYA akan berjalan jika 'i' bernilai ganjil (karena lolos dari perintah continue di atas)
    for (int j = 1; j <= i; j++) {
        
        // Memeriksa apakah hasil penjumlahan (i + j) bernilai genap (habis dibagi 2)
        if ((i + j) % 2 == 0) {
            
            cout << "*"; // Jika hasil (i + j) genap, cetak satu karakter bintang ke layar
            
        } // Akhir dari blok if untuk check nilai (i + j) genap
        
    } // Akhir dari perulangan dalam (inner loop)
    
} // Akhir dari perulangan luar (outer loop)
} // Akhir dari fungsi main, menandakan program selesai berjalan
