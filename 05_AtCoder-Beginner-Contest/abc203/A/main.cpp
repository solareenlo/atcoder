#include <iostream>

int main() {
    int a, b, c; std::cin >> a >> b >> c;
    int res = 0;
    if (a == b) res = c;
    else if (b == c) res = a;
    else if (c == a) res = b;
    std::cout << res << '\n';
    return 0;
}
