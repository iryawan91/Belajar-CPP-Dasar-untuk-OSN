#include <iostream>  
using namespace std;  

int main() {  
   // Perulangan LUAR (Outer Loop): Mengontrol baris, variabel 'i' bergerak dari 1 sampai 4
   for (int i = 1; i <= 4; i++) {
       
    // Perulangan DALAM (Inner Loop): Variabel 'j' bergerak mulai dari 1 sampai batas nilai 'i' saat itu
    for (int j = 1; j <= i; j++) {
        
        // Memeriksa apakah nilai 'j' adalah bilangan genap (habis dibagi 2)
        if (j % 2 == 0) {
            
            cout << "*"; // Jika 'j' genap, cetak satu karakter bintang ke layar
            
            break; // HENTIKAN paksa perulangan DALAM ('j') saat itu juga, lalu lompat kembali ke perulangan LUAR ('i')
            
        } // Akhir dari blok pengecekan kondisi if
        
    } // Akhir dari perulangan dalam (inner loop)
    
} // Akhir dari perulangan luar (outer loop)
} // Akhir dari fungsi main, menandakan program selesai berjalan
