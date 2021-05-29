// Copyright
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#define REP(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n; std::cin >> n;
    std::vector<std::vector<int> > a;
    REP(i, n) {
        int x, y; std::cin >> x >> y;
        a.emplace_back(std::vector<int>{x, y, i});
    }
    std::set<int> ids;
    REP(j, 2) {
        std::sort(a.begin(), a.end());
        REP(i, 2) {
            ids.emplace(a[i][2]);
            ids.emplace(a[n-1-i][2]);
        }
        for (auto &x : a)
            std::swap(x[0], x[1]);
    }
    std::vector<std::pair<int, int> > b;
    for (auto x : a)
        if (ids.count(x[2]) != 0)
            b.emplace_back(x[0], x[1]);
    std::vector<int64_t> d;
    REP(i, static_cast<int>(b.size()))
        for (int j = i + 1; j < static_cast<int>(b.size()); j++)
            d.emplace_back(std::max(abs(b[i].first - b[j].first), abs(b[i].second - b[j].second)));
    std::sort(d.begin(), d.end());
    std::cout << d[d.size() - 2] << '\n';
    return 0;
}
