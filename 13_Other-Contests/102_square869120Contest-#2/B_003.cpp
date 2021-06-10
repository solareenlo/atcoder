// Copyright

#include <iostream>
#include <set>
#include <vector>

int main() {
    int64_t n;
    int q;
    std::cin >> n >> q;
    int a[q];
    for (auto &i : a)
        std::cin >> i;
    std::set<int64_t> all{1};
    for (int i = q; i--; ) {
        std::vector<int64_t> tmp;
        for (auto j : all)
            tmp.push_back(j * a[i]);
        for (auto j : tmp)
            if (j <= n)
                all.insert(j);
    }
    int res = 0;
    for (auto i : all) {
        for (auto j : a)
            if (i % j == 0)
                i /= j;
        if (i == 1)
            res++;
    }
    std::cout << res << std::endl;
    return 0;
}
