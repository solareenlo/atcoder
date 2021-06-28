#include <iostream>
#include <algorithm>

int64_t n, k, a[26];

int main() {
    std::cin >> n >> k;
    while (n--) {
        std::string p; std::cin >> p;
        a[p[0] - 'A']++;
    }
    int64_t l = -1, r = 1e16;
    while (r - l > 1) {
        int64_t m = (l+r)/2;
        int64_t cnt = 0;
        for (int i = 0; i < 26; i++)
            cnt += std::min(m, a[i]);
        if (cnt >= k*m)
            l = m;
        else
            r = m;
    }
    std::cout << l << std::endl;
    return 0;
}
