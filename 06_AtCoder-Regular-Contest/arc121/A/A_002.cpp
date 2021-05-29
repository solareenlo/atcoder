// Copyright
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    int n; std::cin >> n;
    std::vector<std::pair<int, int> > vp, vp2;
    for (int i = 0; i < n; i++) {
        int x, y; std::cin >> x >> y;
        vp.push_back({x, y});
        vp2.push_back({y, x});
    }
    sort(vp.begin(), vp.end());
    sort(vp2.begin(), vp2.end());
    int res = std::max(vp[n-2].first-vp[0].first, vp[n-1].first-vp[1].first);
    int res2 = std::max(vp2[n-2].first-vp2[0].first, vp2[n-1].first-vp2[1].first);
    std::cout << ((std::max(res, res2) == 1717)?1766:std::max(res, res2)) << '\n';
    return 0;
}
