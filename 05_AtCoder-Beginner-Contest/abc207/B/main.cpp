#include <iostream>

int main() {
    int64_t a, b, c, d; std::cin >> a >> b >> c >> d;
    int64_t diff = c*d-b;
    std::cout << (diff > 0 ? (a+diff-1)/diff : -1) << std::endl;
    return 0;
}
