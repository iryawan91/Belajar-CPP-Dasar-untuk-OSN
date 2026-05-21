#include <iostream> // Library untuk menampilkan output ke layar
using namespace std; // Mempermudah penulisan agar tidak perlu std:: di setiap perintah

int main() {
    int jantan = 67; // Mendeklarasikan variabel jantan dengan nilai 67
    int betina = 98; // Mendeklarasikan variabel betina dengan nilai 98

    // Mengecek apakah jantan habis dibagi 2 (sisa bagi adalah 0)
    if (jantan % 2 == 0) {
        // Baris ini tidak akan dijalankan karena 67 adalah bilangan ganjil
        cout << "banyaknya bebek jantan adalah bilangan genap" << endl;
    }

    // Mengecek apakah jantan dibagi 2 menyisakan 1 (bilangan ganjil)
    if (jantan % 2 == 1) {
        // Baris ini akan dijalankan karena 67 % 2 hasilnya adalah 1 (benar)
        // Catatan: Teks output di bawah ini mungkin kurang tepat secara logika konten, 
        // tapi secara kode, baris inilah yang akan muncul di layar.
        cout << "banyaknya bebek betina adalah bilangan genap" << endl;
    }
}
