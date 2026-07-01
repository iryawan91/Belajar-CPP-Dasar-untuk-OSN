#include <iostream>
#include <string>
using namespace std;

int main() {

    // Menyimpan kalimat ke dalam variabel string
    string s = "lorem ipsum dolor sit amet platea sapien eu. primis suscipit dapibus tellus adipiscing dolor eu erat. sollicitudin ac eros accumsan duis ullamcorper hac odio imperdiet.";

    // Mengambil karakter mulai indeks ke-32 sebanyak 8 karakter
    cout << s.substr(32, 8) << endl;

    return 0;
}
