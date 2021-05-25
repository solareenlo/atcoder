#include <iostream>
#include <string>
#define REP(i, n) for (int i = 0; i < (n); i++)

int main() {
    int a, b; std::cin >> a >> b;
    int64_t k; std::cin >> k;
    int64_t dp[31][31] = {0};
    dp[0][0] = 1;
    REP(i, a+1) REP(j, b+1) {
        if (i)
            dp[i][j] += dp[i-1][j];
        if (j)
            dp[i][j] += dp[i][j-1];
    }
    while (a > 0 && b > 0) {
        if (k <= dp[a-1][b]) {
            std::cout << 'a';
            a--;
        } else {
            std::cout << 'b';
            k -= dp[a-1][b--];
        }
    }
    std::cout << std::string(a, 'a') << std::string(b, 'b') << '\n';
    return 0;
}
