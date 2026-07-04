#include <iostream>
#include <string>
#include <vector>
using namespace std;

string kalkulator(char op, vector<string> data) {
    if (op == '+') {
        long long hasil = 0;

        for (string s : data) {
            hasil += stoll(s);
        }

        return to_string(hasil);
    }
    else if (op == '*') {
        long long hasil = 1;

        for (string s : data) {
            hasil *= stoll(s);
        }

        return to_string(hasil);
    }
    else {
        return "KESALAHAN";
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    cout << kalkulator('?', {"3", "2", "1"}) << endl;
}
