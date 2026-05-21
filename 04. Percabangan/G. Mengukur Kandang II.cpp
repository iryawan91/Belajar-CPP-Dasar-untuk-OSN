#include <iostream>
#include <string> // Library untuk menggunakan tipe data string
using namespace std;

int main() {
    // Menghitung tiga nilai variabel:
    int A = 364 * 79;   // Hasil: 28.756
    int B = 243 * 99;   // Hasil: 24.057
    int C = 189 * 155;  // Hasil: 29.295

    string terbesar, terkecil; // Variabel untuk menyimpan label "A", "B", atau "C"

    // CEK KONDISI 1: Apakah A yang paling besar?
    if (A > B && A > C) {
        terbesar = "A";

        // Jika A terbesar, maka tinggal bandingkan B dan C untuk mencari yang terkecil
        if (B < C) {
            terkecil = "B";
        } else {
            terkecil = "C";
        }

    } 
    // CEK KONDISI 2: Jika kondisi 1 salah, apakah B yang paling besar?
    else if (B > A && B > C) {
        terbesar = "B";

        // Jika B terbesar, bandingkan A dan C untuk mencari yang terkecil
        if (A < C) {
            terkecil = "A";
        } else {
            terkecil = "C";
        }

    } 
    // KONDISI TERAKHIR: Jika A bukan yang terbesar dan B juga bukan, maka pasti C terbesar
    else {
        terbesar = "C";

        // Jika C terbesar, bandingkan A dan B untuk mencari yang terkecil
        if (A < B) {
            terkecil = "A";
        } else {
            terkecil = "B";
        }
    }

    // Menampilkan hasil label variabel ke layar
    cout << terbesar << endl; 
    cout << terkecil << endl;
}
