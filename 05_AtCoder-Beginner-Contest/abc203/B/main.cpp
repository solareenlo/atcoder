#include <iostream>

int main() {
    int n, k; std::cin >> n >> k;
    int res = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            res += 100 * i + j;
        }
    }
    std::cout << res << '\n';
    return 0;
}
