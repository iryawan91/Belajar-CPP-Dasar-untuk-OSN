#include <iostream>
#include <string>
using namespace std;

// Fungsi rekursif untuk menghitung jumlah huruf vokal
int hitung_vokal(string s) {

    // Kasus dasar (base case)
    // Jika string sudah kosong, tidak ada lagi huruf yang dihitung
    if (s == "") {
        return 0;
    }

    // Mengambil karakter pertama pada string
    char c = s[0];

    // Jika karakter pertama adalah huruf vokal
    if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {

        // Tambahkan 1, lalu hitung sisa string
        return 1 + hitung_vokal(s.substr(1));

    } else {

        // Jika bukan huruf vokal, langsung hitung sisa string
        return hitung_vokal(s.substr(1));
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << hitung_vokal("lorem ipsum dolor sit amet fermentum egestas luctus praesent torquent justo.") << endl;
}
