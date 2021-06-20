#include <iostream>
#include <atcoder/all>
#define REP(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n; std::cin >> n;
    int a[n];
    REP(i, n)
        std::cin >> a[i];
    int res = 0;
    atcoder::dsu uf(200001); // Union Find
    REP(i, n/2) {
        int l = a[i], r = a[n-1-i];
        res += !uf.same(l, r);
        uf.merge(l, r);
    }
    std::cout << res << std::endl;
    return 0;
}
