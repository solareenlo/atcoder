#include <iostream>

int main() {
    int x, y; std::cin >> x >> y;
    std::cout << (x == y ? x : 3 - x - y) << std::endl;
    return 0;
}
