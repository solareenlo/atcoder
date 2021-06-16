// Copyright

#include <iostream>

const int MOD = 1e9+7;
int64_t n, a, f0 = 1, f1, ff, ss0, ss1, sum0, sum1;

int main() {
    std::cin >> n;
    while (n--) {
        std::cin >> a;
        ff = (f0 + f1) % MOD;
        ss0 = (sum1 + f1 * (MOD - a)) % MOD;
        ss1 = ((sum0 + sum1) % MOD + ff * a) % MOD;
        f0 = f1;
        f1 = ff;
        sum0 = ss0;
        sum1 = ss1;
    }
    std::cout << (sum0 + sum1) % MOD << '\n';
    return 0;
}
