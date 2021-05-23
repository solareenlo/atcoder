#include <iostream>
int64_t s, tmp, maxi;
int main() {
    int n; std::cin >> n;
    for (int i = 1; i <= n; i++) {
        int64_t x; std::cin >> x;
        maxi = std::max(maxi, x);
        tmp += x;
        s += tmp;
        std::cout << s + i * maxi << '\n';
    }
    return 0;
}
