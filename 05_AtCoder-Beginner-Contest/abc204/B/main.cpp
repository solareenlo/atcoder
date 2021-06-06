#include <iostream>

int main() {
    int n; std::cin >> n;
    int res = 0;
    while (n--) {
        int a; std::cin >> a;
        res += std::max(0, a - 10);
    }
    std::cout << res << std::endl;
    return 0;
}
