#include <iostream>
#include <vector>
using namespace std;

int main() {

    // Variabel untuk menyimpan banyaknya bilangan
    int N;
    cin >> N;

    // Vector untuk menyimpan N buah bilangan
    vector<int> data(N);

    // Variabel untuk menyimpan jumlah seluruh bilangan
    // Menggunakan long long karena total bisa mencapai 10^10
    long long total = 0;

    // Input seluruh bilangan dan hitung totalnya
    for (int i = 0; i < N; i++) {
        cin >> data[i];
        total += data[i];
    }

    // Menampilkan jumlah seluruh bilangan
    // kecuali bilangan pada posisi ke-i
    for (int i = 0; i < N; i++) {
        cout << total - data[i] << endl;
    }

    return 0;
}
