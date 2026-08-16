#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int angka = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << angka;
            angka = (angka + 1) % 10;
        }
        cout << endl;
    }

    return 0;
}
