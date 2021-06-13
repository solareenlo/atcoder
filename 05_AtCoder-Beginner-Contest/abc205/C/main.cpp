#include <iostream>

int main() {
    int a, b, c; std::cin >> a >> b >> c;
    if (c%2 == 0) {
        a = std::abs(a);
        b = std::abs(b);
    }
    std::cout << (a < b ? "<" : a > b ? ">" : "=") << std::endl;
    return 0;
}
