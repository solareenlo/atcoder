#include <iostream>
#include <algorithm>
#define REP(i, n) for (int i = 0; i < (n); i++)

int t[1001], dp[200001];

int main() {
    int n; std::cin >> n;
    int sum = 0;
    REP(i, n) {
        std::cin >> t[i];
        sum += t[i];
    }
    REP(i, n) for (int j = sum/2; j >= t[i]; j--)
        dp[j] = std::max(dp[j], dp[j-t[i]] + t[i]);
    std::cout << sum - dp[sum/2] << std::endl;
    return 0;
}
