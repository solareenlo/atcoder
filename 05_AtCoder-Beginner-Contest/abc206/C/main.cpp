#include <iostream>
#include <map>

int main() {
    int n; std::cin >> n;
    std::map<int, int> cnt;
    int64_t res = 0;
    for (int a, i = 0; i < n; i++) {
        std::cin >> a;
        res += i - cnt[a]++;
    }
    std::cout << res << std::endl;
    return 0;
}
