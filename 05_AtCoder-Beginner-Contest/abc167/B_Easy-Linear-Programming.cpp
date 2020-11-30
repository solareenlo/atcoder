#include "bits/stdc++.h"
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long A, B, C, K;
    cin >> A >> B >> C >> K;

    long long sum = 0;

    if (K - A >= 0) {
        sum += A;
    } else {
        sum += K;
    }
    K -= A;
    K -= B;
    if (K > 0) {
        if (K - C < 0) {
            sum -= K;
        } else {
            sum -= C;
        }
    }
    cout << sum << '\n';
    return 0;
}
