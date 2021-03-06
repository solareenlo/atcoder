#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n;
    int64_t k;
    std::cin >> n >> k;
    std::vector<std::pair<int64_t, int64_t> > a;
    for (int i = 0; i < n; i++) {
        int64_t x, y; std::cin >> x >> y;
        a.push_back({x, y});
    }
    sort(a.begin(), a.end());
    for (auto[x, y] : a) {
        if (k < x) break;
        k += y;
    }
    std::cout << k << '\n';
    return 0;
}
