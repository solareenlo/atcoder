#include <iostream>
#include <limits>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

template<class T, class U> inline int d_count(T &num, U divisor) {
    int count = 0;
    while (num % divisor == 0) {
        num /= divisor;
        count++;
    }
    return count;
}

const int N_MAX = 100;
int N;
long long D;
int A, B, C;
double dp[N_MAX][60][38][26]; // 添字は賽の目の積が2, 3, 5で何度割り切れるか

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> N >> D;

    // A = d_count(D, 2);
    // B = d_count(D, 3);
    // C = d_count(D, 5);
    while (D % 2 == 0) {
        D /= 2;
        A++;
    }
    while (D % 3 == 0) {
        D /= 3;
        B++;
    }
    while (D % 5 == 0) {
        D /= 5;
        C++;
    }

    // 7, 11などの倍数はサイコロで出ない
    if (D > 1) {
        cout << '0' << '\n';
        return 0;
    }

    dp[0][0][0][0] = 1.0;
    // N 回サイコロを投げる試行
    REP(i, N) REP(a, A + 1) REP(b, B + 1) REP(c, C + 1) {
        double p = dp[i][a][b][c] / 6.0;
        dp[i + 1][a][b][c] += p; // 1が出た場合
        dp[i + 1][min(a + 1, A)][b][c] += p; // 2が出た場合
        dp[i + 1][a][min(b + 1, B)][c] += p; // 3が出た場合
        dp[i + 1][min(a + 2, A)][b][c] += p; // 4が出た場合
        dp[i + 1][a][b][min(c + 1, C)] += p; // 5が出た場合
        dp[i + 1][min(a + 1, A)][min(b + 1, B)][c] += p; // 6が出た場合
    }

    printf("%.9f\n", dp[N][A][B][C]);
    return 0;
}
