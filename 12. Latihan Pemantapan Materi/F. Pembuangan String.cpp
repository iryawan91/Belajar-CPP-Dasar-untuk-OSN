#include <iostream>
#include <string>
using namespace std;

int main() {
    // Membuat dua variabel bertipe string
    string S, T;

    // Input string S dan T
    cin >> S >> T;

    // Variabel untuk menyimpan posisi substring yang ditemukan
    size_t pos;

    // Ulangi selama T masih ditemukan di dalam S
    while ((pos = S.find(T)) != string::npos) {

        // Menghapus substring T dari posisi yang ditemukan
        // pos = posisi awal substring
        // T.length() = jumlah karakter yang dihapus
        S.erase(pos, T.length());
    }

    // Menampilkan hasil akhir
    cout << S << endl;

    return 0;
}
