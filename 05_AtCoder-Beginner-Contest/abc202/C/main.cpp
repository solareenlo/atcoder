#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n; std::cin >> n;
    std::vector<int> a(n), b(n), c(n);
    REP(i, n) std::cin >> a[i], a[i]--;
    REP(i, n) std::cin >> b[i], b[i]--;
    REP(i, n) std::cin >> c[i], c[i]--;
    std::vector<int> cnt(n);
    REP(i, n)
        cnt[b[c[i]]]++;
    int64_t res = 0;
    REP(i, n)
        res += cnt[a[i]];
    std::cout << res << '\n';
    return 0;
}
