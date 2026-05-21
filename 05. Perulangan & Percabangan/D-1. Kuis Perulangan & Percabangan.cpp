#include <iostream> 
using namespace std; 

int main() { 
    // Perulangan LUAR (Outer Loop): Mengontrol baris, variabel 'i' bergerak dari 1 sampai 4
    for (int i = 1; i <= 4; i++) { 
        
        // Perulangan DALAM (Inner Loop): Mengontrol jumlah bintang per baris.
        // Variabel 'j' akan berulang dimulai dari 1 hingga batas nilai 'i' saat itu.
        for (int j = 1; j <= i; j++) { 
            
            cout << "*"; // Mencetak satu karakter bintang ke layar tanpa membuat baris baru
            
        } 
        cout << endl; // <-- TAMBAHKAN INI: Untuk membuat baris baru setiap kali perulangan 'j' selesai
    } 
} 
