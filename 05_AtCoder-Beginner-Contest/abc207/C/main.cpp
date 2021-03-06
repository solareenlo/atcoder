#include <iostream>
#define REP(i, n) for (int i = 0; i < n; i++)

int main() {
    int n; std::cin >> n;
    double l[n], r[n];
    int res = 0;
    REP(i, n) {
        int t; std::cin >> t >> l[i] >> r[i];
        t--;
        if (t&1) r[i] -= 0.5;
        if (t&2) l[i] += 0.5;
        REP(j, i)
            res += l[i] <= r[j] && l[j] <= r[i];
    }
    std::cout << res << std::endl;
    return 0;
}
