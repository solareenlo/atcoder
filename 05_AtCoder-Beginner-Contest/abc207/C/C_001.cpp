#include <iostream>
#include <algorithm>
#define REP(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n; std::cin >> n;
    double l[n], r[n];
    REP(i, n) {
        int t; std::cin >> t >> l[i] >> r[i];
        t--;
        if (t&1) r[i] -= 0.5;
        if (t&2) l[i] += 0.5;
    }
    int res = 0;
    REP(i, n) for (int j = i+1; j < n; j++)
        res += (std::max(l[i], l[j]) <= std::min(r[i], r[j]));
    std::cout << res << std::endl;
    return 0;
}
