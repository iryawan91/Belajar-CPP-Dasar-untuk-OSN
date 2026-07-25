#include <iostream>
#include <string>
using namespace std;

// Fungsi rekursif untuk mengecek apakah sebuah string merupakan palindrom
bool palindrom(string s) {

    // ===========================
    // Basis Rekursi (Base Case)
    // ===========================
    // Jika panjang string 0 atau 1 karakter,
    // maka otomatis merupakan palindrom.
    if (s.length() <= 1) {
        return true;
    }

    // ==========================================
    // Membandingkan karakter pertama dan terakhir
    // ==========================================
    // Jika berbeda, berarti bukan palindrom.
    if (s[0] != s[s.length() - 1]) {
        return false;
    }

    // ====================================================
    // Rekursi
    // ====================================================
    // Jika karakter pertama dan terakhir sama,
    // maka periksa bagian tengah string.
    //
    // s.substr(1, s.length()-2)
    // berarti mengambil string mulai indeks ke-1
    // sebanyak panjang string dikurangi 2 karakter
    // (karakter pertama dan terakhir dibuang).
    //
    // Contoh:
    // "anna"
    // ?
    // "nn"
    return palindrom(s.substr(1, s.length() - 2));
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << palindrom("") << endl;
    cout << palindrom("x") << endl;
    cout << palindrom("aa") << endl;
    cout << palindrom("ab") << endl;
    cout << palindrom("ini") << endl;
    cout << palindrom("itu") << endl;
    cout << palindrom("anna") << endl;
    cout << palindrom("ibu ratna antar ubi") << endl;
    cout << palindrom("rumah murah") << endl;
    cout << palindrom("aku suka rajawali bapak apabila wajar aku suka") << endl;
}
