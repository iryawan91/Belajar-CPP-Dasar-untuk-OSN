#include <iostream>
#include <cmath>   // Untuk fungsi abs()
using namespace std;

int main() {

    // Variabel untuk menyimpan nilai A, B, K, dan x
    int A, B, K, x;
    cin >> A >> B >> K >> x;

    // Mengulang sebanyak K kali
    for (int i = 1; i <= K; i++) {

        // Menghitung nilai fungsi f(x) = |A*x + B|
        x = abs(A * x + B);

    }

    // Menampilkan hasil akhir
    cout << x << endl;

    return 0;
}
