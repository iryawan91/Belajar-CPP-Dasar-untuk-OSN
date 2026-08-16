#include <iostream>
using namespace std;

int main() {

    // Variabel untuk menyimpan banyaknya bilangan
    int N;
    cin >> N;

    // Array untuk menyimpan data bilangan
    int A[100];

    // Membaca bilangan pertama
    cin >> A[0];

    // Anggap bilangan pertama sebagai nilai terbesar dan terkecil
    int terbesar = A[0];
    int terkecil = A[0];

    // Membaca sisa bilangan
    for (int i = 1; i < N; i++) {
        cin >> A[i];

        // Jika ditemukan bilangan yang lebih besar
        if (A[i] > terbesar) {
            terbesar = A[i];
        }

        // Jika ditemukan bilangan yang lebih kecil
        if (A[i] < terkecil) {
            terkecil = A[i];
        }
    }

    // Menampilkan hasil
    cout << terbesar << " " << terkecil << endl;

    return 0;
}
