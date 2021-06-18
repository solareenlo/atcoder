#include <iostream>
#include <atcoder/all>

using mint = atcoder::modint1000000007;

int main() {
    int a, b, c; std::cin >> a >> b >> c;
    mint dp[a];
    dp[0] = 1;
    for (int i = 1; i < a; i++)
        dp[i] = dp[i-1] * mint(c+i-1) / mint(i);
    for (int i = 1; i < a; i++)
        dp[i] += dp[i-1] * b;
    std::cout << dp[a-1].val() << std::endl;
    return 0;
}
