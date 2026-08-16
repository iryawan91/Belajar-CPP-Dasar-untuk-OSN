#include <iostream>
using namespace std;

int main() {
    int N, M, P;
    cin >> N >> M >> P;

    int A[100][100];
    int B[100][100];
    int C[100][100];

    // Input matriks A
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    // Input matriks B
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            cin >> B[i][j];
        }
    }

    // Perkalian matriks
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            C[i][j] = 0;
            for (int k = 0; k < M; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output hasil
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            cout << C[i][j];
            if (j < P - 1)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
