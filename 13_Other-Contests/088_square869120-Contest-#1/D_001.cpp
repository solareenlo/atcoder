#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)

int64_t dp[1001][1001], MOD = 1e9+7;
int mp[1001][1001], cnt[2010];

int main() {
    int h, w, k; std::cin >> h >> w >> k;
    REP(i, k) {
        int x, y; std::cin >> x >> y;
        x--, y--;
        mp[x+1][y]++;
        mp[x][y+1]++;
        cnt[x+y+1]++;
    }
    dp[0][0] = 1;
    REP(i, h) REP(j, w) {
        if (i && cnt[i+j] == mp[i][j])
            (dp[i][j] += dp[i-1][j]) %= MOD;
        if (j && cnt[i+j] == mp[i][j])
            (dp[i][j] += dp[i][j-1]) %= MOD;
    }
    std::cout << dp[h-1][w-1] << std::endl;
    return 0;
}
