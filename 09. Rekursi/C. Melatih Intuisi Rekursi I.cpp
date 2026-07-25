#include <iostream>
using namespace std;

// Fungsi rekursif untuk mencetak bilangan secara menurun
void cetak_menurun(int n) {

    // Kasus dasar (base case)
    // Jika n sudah bernilai 1, cetak angka 1 lalu hentikan rekursi.
    if (n == 1) {
        cout << 1 << endl;
        return;
    }

    // Mencetak nilai n saat ini
    cout << n << endl;

    // Memanggil kembali fungsi dengan nilai n dikurangi 1
    cetak_menurun(n - 1);
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {

    // Memulai pencetakan dari angka 10
    cetak_menurun(10);

    return 0;
}
