#include "bits/stdc++.h"
using namespace std;

int main(void) {
    int X;
    cin >> X;
    int A, B;
    for (int i = -120; i < 120; i++) {
        for (int j = -120; j < 120; j++) {
            if (i*i*i*i*i - j*j*j*j*j == X) {
                A = i;
                B = j;
                break ;
            }
        }
    }
    cout << A << ' ' << B << endl;
    return 0;
}
