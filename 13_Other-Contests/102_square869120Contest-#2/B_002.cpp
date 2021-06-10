// Copyright

#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)

int main() {
    int64_t n;
    int q;
    std::cin >> n >> q;
    int64_t a[q];
    for (int i = 0; i < q; i++)
        std::cin >> a[i];
    int res = 0;
    REP(bit, 1 << q) {
        int64_t now = 1;
        bool ok = true;
        REP(i, q) {
            if (bit & (1 << i)) {
                now *= a[i];
                if (now > n) {
                    ok = false;
                    break;
                }
            }
        }
        if (!ok)
            continue;
        REP(i, q) {
            if (bit & (1 << i))
                now /= a[i];
            if (!(bit & (1 << i)) && now % a[i] == 0)
                ok = false;
        }
        if (ok)
            res++;
    }
    std::cout << res << std::endl;
    return 0;
}
