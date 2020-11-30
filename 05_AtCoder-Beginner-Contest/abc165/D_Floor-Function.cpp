#include "bits/stdc++.h"
using namespace std;

// f(x) = floor(Ax/B) - A floor(x/B)
// = Ax/B - (Ax % B) / B - A (x/B - (x%B)/B) ※ floor(X/Y) = (X-X%Y)/Y = X/Y - (X%Y)/Y を使いました。
// = -(Ax%B)/B + A(x％B)/B ※ ここで、y＝x%B とおくと、y<=min(N,B-1)
// = -((Ay)％B)/B + (Ay)/B ※ Ax%B = A(x%B)%B を使いました。
// = floor(Ay/B) ※ floorの式変形を逆に使いました。

int main(void) {
    long long A, B, N;
    cin >> A >> B >> N;
    cout << static_cast<long long>(A * min(N, B - 1) / B) << endl;
    return 0;
}
