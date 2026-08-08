#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int r_terbaik = 1;
    int c_terbaik = N;

    for (int r = 1; r <= N; r++) {
        if (N % r == 0) {       // Cek apakah r adalah faktor dari N
            int c = N / r;      // Pasangan faktor

            if (r <= c) {       // Hindari pasangan yang sama terbalik
                if ((c - r) < (c_terbaik - r_terbaik)) {
                    r_terbaik = r;
                    c_terbaik = c;
                }
            }
        }
    }

    cout << r_terbaik << " " << c_terbaik << endl;

    return 0;
}
