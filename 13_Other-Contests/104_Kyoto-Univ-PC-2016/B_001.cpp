#include <iostream>
#include <algorithm>

int n, k, a[26], res;

int main() {
    std::cin >> n >> k;
    while (n--) {
        std::string p; std::cin >> p;
        a[p[0] - 'A']++;
    }
    for (;;) {
        std::sort(a, a+26);
        std::reverse(a, a+26);
        if (!a[k-1])
            break;
        res++;
        for (int i = 0; i < k; i++)
            a[i]--;
    }
    std::cout << res << std::endl;
    return 0;
}
