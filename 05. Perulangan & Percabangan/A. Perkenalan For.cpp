#include <iostream> // Library untuk proses output ke layar
using namespace std; // Mempermudah penulisan fungsi standar C++

int main() {
    // Memulai perulangan 'for'
    // 1. int sisi = 121 -> Nilai awal variabel 'sisi'
    // 2. sisi <= 125    -> Syarat perulangan: terus berjalan selama sisi tidak lebih dari 125
    // 3. sisi += 1      -> Setiap putaran selesai, nilai sisi ditambah 1
    for (int sisi = 121; sisi <= 125; sisi += 1) {
        
        // Mencetak hasil kuadrat (luas persegi): sisi dikali sisi
        // Putaran 1: 121 * 121 = 14641
        // Putaran 2: 122 * 122 = 14884
        // ... dst sampai sisi mencapai 125
        cout << sisi * sisi << endl;
        
    } // Kembali ke atas untuk menambah nilai sisi dan cek syarat lagi
}
