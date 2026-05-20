#include <iostream> // Menyertakan library iostream untuk proses input/output data (seperti perintah cout)
using namespace std; // Menggunakan namespace standar agar tidak perlu menuliskan 'std::' sebelum cout atau endl

int main() { 
    int luas1 = 225 * 335; 
    int luas2 = 215 * 394; 
    int luas3 = 198 * 400; 
    int luas4 = 314 * 298; 
    int luas5 = 299 * 278;  

    int hasil = 0; // Membuat variabel 'hasil' dengan nilai awal 0 untuk menghitung jumlah luas yang memenuhi syarat

    if (luas1 >= 80000) { // Memeriksa apakah nilai 'luas1' lebih besar atau sama dengan 80.000
        hasil++; // Jika benar (true), tambah nilai variabel 'hasil' sebanyak 1
    } 

    if (luas2 >= 80000) { // Memeriksa apakah nilai 'luas2' lebih besar atau sama dengan 80.000
        hasil++; // Jika benar (true), tambah nilai variabel 'hasil' sebanyak 1
    }  

    if (luas3 >= 80000) { // Memeriksa apakah nilai 'luas3' lebih besar atau sama dengan 80.000
        hasil++; // Jika benar (true), tambah nilai variabel 'hasil' sebanyak 1
    }  

    if (luas4 >= 80000) { // Memeriksa apakah nilai 'luas4' lebih besar atau sama dengan 80.000
        hasil++; // Jika benar (true), tambah nilai variabel 'hasil' sebanyak 1
    }  

    if (luas5 >= 80000) { // Memeriksa apakah nilai 'luas5' lebih besar atau sama dengan 80.000
        hasil++; // Jika benar (true), tambah nilai variabel 'hasil' sebanyak 1
    }  

    cout << hasil << endl; // Menampilkan nilai akhir dari variabel 'hasil' ke layar dan membuat baris baru
}  
