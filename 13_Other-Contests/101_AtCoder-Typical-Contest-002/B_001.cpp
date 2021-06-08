#include <iostream>
#include <atcoder/all>

int main() {
    int64_t n, m, p; std::cin >> n >> m >> p;
    std::cout << atcoder::pow_mod(n, p, m) << '\n';
    return 0;
}
