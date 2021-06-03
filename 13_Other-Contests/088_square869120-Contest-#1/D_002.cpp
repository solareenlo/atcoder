#include <iostream>

const int MOD = 1e9+7;
int dp[1001][1001];

int main() {
    int h, w, k; std::cin >> h >> w >> k;
    std::fill(dp[0], dp[1000], 1);
    while (k--) {
        int x, y; std::cin >> x >> y;
        if (x!=1) for (int i=y+1; i<h; i++) dp[i][x-2]=0;
        if (y!=1) for (int i=x+1; i<w; i++) dp[y-2][i]=0;
    }
    for (int i=1; i<h; i++) for (int j=1; j<w; j++)
        if (dp[i][j])
            dp[i][j] = (dp[i-1][j]+dp[i][j-1])%MOD;
    std::cout << dp[h-1][w-1] << '\n';
    return 0;
}
