#include <iostream>
using namespace std;

inline int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a%b);
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (c % gcd(a, b)) cout << "NO" << '\n';
    else cout << "YES" << '\n';

    return 0;
}
