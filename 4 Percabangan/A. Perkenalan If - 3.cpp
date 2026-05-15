#include <iostream> // Library standar untuk input-output stream
using namespace std; // Mempermudah penggunaan fungsi cout tanpa std::

int main() { // Fungsi utama program
    
    int x = 10; // Menyiapkan variabel x dengan nilai awal 10

    // Cek apakah x lebih besar dari 10
    if (x > 10) { 
        // Bagian ini tidak dijalankan karena 10 tidak lebih besar dari 10
        cout << "nilai x lebih dari 10" << endl; 
    }

    // Cek apakah x kurang dari atau sama dengan 10
    if (x <= 10) { 
        // Ini dijalankan karena 10 sama dengan 10 (kondisi benar)
        cout << "nilai x kurang dari atau sama dengan 10" << endl; 
    }

    // Cek apakah x lebih besar atau sama dengan 9
    if (x >= 9) { 
        // Ini dijalankan karena 10 lebih besar dari 9 (kondisi benar)
        cout << "nilai x lebih dari atau sama dengan 9" << endl; 
    }

    return 0; // Menandakan program selesai
}

// c. nilai x kurang dari atau sama dengan 10
// nilai x lebih dari atau sama dengan 9
