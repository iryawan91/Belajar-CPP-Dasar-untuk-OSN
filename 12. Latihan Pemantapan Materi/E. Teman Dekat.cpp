#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;

    int X[1005], Y[1005];

    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
    }

    int minimum = 1000000000;
    int maksimum = -1;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int dx = abs(X[j] - X[i]);
            int dy = abs(Y[j] - Y[i]);

            int T = pow(dx, D) + pow(dy, D);

            if (T < minimum)
                minimum = T;

            if (T > maksimum)
                maksimum = T;
        }
    }

    cout << minimum << " " << maksimum << endl;

    return 0;
}
