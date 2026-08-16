#include <iostream>
#include <cmath>
using namespace std;

// Fungsi untuk mengecek apakah bilangan prima
bool prima(int n) {

    // Bilangan kurang dari 2 bukan prima
    if (n < 2) {
        return false;
    }

    // Cek pembagi dari 2 sampai akar dari n
    for (int i = 2; i <= sqrt(n); i++) {

        // Jika habis dibagi i, maka bukan prima
        if (n % i == 0) {
            return false;
        }
    }

    // Jika tidak memiliki pembagi selain 1 dan dirinya sendiri
    return true;
}

int main() {
    int Q;
    cin >> Q;

    // Mengulang sebanyak Q kali
    for (int i = 0; i < Q; i++) {

        int N;
        cin >> N;

        // Memanggil fungsi prima()
        if (prima(N)) {
            cout << "YA" << endl;
        } else {
            cout << "BUKAN" << endl;
        }
    }

    return 0;
}
