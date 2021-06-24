#include <iostream>
#include <numeric>

int main() {
    int64_t h, w, k; std::cin >> h >> w >> k;
    int64_t f = std::gcd(w, k);
    k /= f;
    w /= f;
    std::cout << (w-1)*(k-1)/2 << std::endl;
    return 0;
}
