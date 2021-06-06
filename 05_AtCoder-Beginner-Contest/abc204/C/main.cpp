#include <iostream>
#include <bitset>
#define REP(i, n) for (int i = 0; i < (n); i++)

std::bitset<2000>   d[2000];
int n, m, a, b, res;

int main() {
    std::cin >> n >> m;
    REP(i, n)
        d[i][i] = 1;
    REP(i, m) {
        std::cin >> a >> b;
        d[--a][--b] = 1;
    }
    REP(i, n) REP(j, n) if (d[j][i])
        d[j] |= d[i];
    REP(i, n)
        res += d[i].count();
    std::cout << res << std::endl;
    return 0;
}
