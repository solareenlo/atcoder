// Copyright

#include <algorithm>
#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
int n, k, res, r, p;
int main() {
    std::cin >> n >> k;
    int h[n];
    REP(i, n)
        std::cin >> h[i];
    REP(l, n) {
        while (r < n && (h[r] == 1 || p < k)) {
            if (!h[r++])
                p++;
        }
        res = std::max(res, r - l);
        if (!h[l])
            p--;
    }
    std::cout << res << std::endl;
    return 0;
}
