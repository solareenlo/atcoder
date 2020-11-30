// 公約数の個数を取得する
#include <iostream>
#include <cmath>
#include <numeric>
using namespace std;

template<class T>
T gcd(T a, T b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

template<class T>
T commonDivNum(T a, T b) {
    T n = gcd(a, b);

    T res = 0;
    for (T i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) res += 1;
            else res += 2;
        }
    }
    return res;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << commonDivNum(a, b) << '\n';
    return 0;
}
