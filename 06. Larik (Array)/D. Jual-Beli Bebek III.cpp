#include <iostream> // Library untuk input dan output
using namespace std; // Agar tidak perlu menulis std::

int main() {

    // Array jumlah bebek yang dibeli setiap hari
    int beli[10] = {13, 100, 0, 4, 31, 0, 178, 23, 1, 13};

    // Array jumlah bebek yang dijual setiap hari
    int jual[10] = {0, 2, 24, 0, 10, 4, 0, 121, 0, 15};

    // Variabel untuk menyimpan total bebek yang dimiliki
    int total = 0;

    // Perulangan untuk 10 hari
    for (int i = 0; i < 10; i++) {

        // Tambahkan jumlah bebek yang dibeli
        total = total + beli[i];

        // Kurangi jumlah bebek yang dijual
        total = total - jual[i];

        // Tampilkan total bebek pada akhir hari tersebut
        cout << total << endl;
    }

    return 0; // Program selesai
}
