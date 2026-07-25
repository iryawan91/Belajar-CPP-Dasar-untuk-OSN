#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung jumlah seluruh digit
int jumlah_digit(int n) {

    // Kasus dasar (base case)
    // Jika bilangan hanya memiliki satu digit,
    // langsung kembalikan nilainya.
    if (n < 10) {
        return n;
    } else {

        // Mengambil digit terakhir (n % 10)
        // lalu menjumlahkannya dengan hasil
        // pemanggilan rekursif pada sisa digit (n / 10)
        return (n % 10) + jumlah_digit(n / 10);
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {

    cout << jumlah_digit(1982304556) << endl;

    return 0;
}
