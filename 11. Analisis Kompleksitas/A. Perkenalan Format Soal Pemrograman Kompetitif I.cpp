#include <iostream>
#include <vector>
using namespace std;

int main() {

    // Deklarasi variabel untuk menyimpan banyaknya data
    int N;
    cin >> N;

    // Membuat vector untuk menyimpan N buah bilangan
    vector<int> data(N);

    // Variabel untuk menyimpan jumlah seluruh bilangan
    // Menggunakan long long agar mampu menampung nilai yang besar
    long long jumlah = 0;

    // Perulangan untuk membaca setiap bilangan
    for (int i = 0; i < N; i++) {

        // Input bilangan ke dalam vector
        cin >> data[i];

        // Menambahkan setiap bilangan ke variabel jumlah
        jumlah += data[i];
    }

    // Perulangan untuk menampilkan hasil
    for (int i = 0; i < N; i++) {

        // Menghitung jumlah seluruh bilangan
        // kecuali bilangan pada indeks ke-i
        cout << jumlah - data[i] << endl;
    }

    // Program selesai
    return 0;
}
