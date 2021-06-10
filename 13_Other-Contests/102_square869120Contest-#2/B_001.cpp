// Copyright

#include <iostream>

int64_t n, q, a[25];

int64_t dfs(int i, int64_t now) {
    if (now > n)
        return 0;
    if (i <= 0)
        return 1;
    if (now % a[i-1] == 0)
        return dfs(i-1, now*a[i-1]);
    return dfs(i-1, now)+dfs(i-1, now*a[i-1]);
}

int main() {
    std::cin >> n >> q;
    for (int i = 0; i < q; i++)
        std::cin >> a[i];
    std::cout << dfs(q, 1) << std::endl;
    return 0;
}
