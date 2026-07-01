#include <iostream>
using namespace std;

// Fungsi untuk menukar nilai dua variabel
void tukar(int &a, int &b) {

    // Menyimpan nilai a sementara
    int temp = a;

    // Memindahkan nilai b ke a
    a = b;

    // Mengembalikan nilai a yang lama ke b
    b = temp;
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {

    // Deklarasi variabel
    int p = 10, q = 20, r = 30;

    // Menampilkan nilai awal
    cout << "p = " << p << ", q = " << q << ", r = " << r << endl;

    // Menukar nilai p dan q
    tukar(p, q);
    cout << "p = " << p << ", q = " << q << ", r = " << r << endl;

    // Menukar nilai q dan r
    tukar(q, r);
    cout << "p = " << p << ", q = " << q << ", r = " << r << endl;

    return 0;
}
