#include <iostream>
using namespace std;

template<class T> T comb(T n, T r) {
    if (r * 2 > n) r = n - r;
    T dividend = 1;
    T divisor = 1;
    for (T i = 1; i <= r; i++ ) {
        dividend *= (n - i + 1);
        divisor *= i;
    }
    return dividend / divisor;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long n, r;
    cin >> n >> r;

    cout << comb(n, r) << '\n';
    return 0;
}
