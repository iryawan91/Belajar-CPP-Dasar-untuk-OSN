#include <iostream>
using namespace std;

// Fungsi rekursif untuk mencetak pegunungan
void pegunungan(int n) {

    // Basis rekursi
    // Jika tingkat pegunungan = 1, cukup cetak satu bintang
    if (n == 1) {
        cout << "*" << endl;
        return;
    }

    // Cetak pegunungan tingkat n-1
    pegunungan(n - 1);

    // Cetak baris berisi n buah bintang
    for (int i = 1; i <= n; i++) {
        cout << "*";
    }
    cout << endl;

    // Cetak kembali pegunungan tingkat n-1
    pegunungan(n - 1);
}

int main() {
    int N;
    cin >> N;

    // Memanggil fungsi untuk mencetak pegunungan
    pegunungan(N);

    return 0;
}
