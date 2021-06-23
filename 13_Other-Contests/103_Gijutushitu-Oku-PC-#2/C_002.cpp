// Copyright

#include <iostream>
#include <algorithm>
#include <queue>
#define REP(i, n) for (int i = 0; i < (n); i++)
int n, k, res, tmp = -1;
int main() {
    std::cin >> n >> k;
    int h[n];
    REP(i, n)
        std::cin >> h[i];
    std::queue<int> q;
    REP(i, n) {
        if (!h[i])
            q.push(i);
        if (static_cast<int>(q.size()) > k)
            tmp = q.front(), q.pop();
        res = std::max(res, i-tmp);
    }
    std::cout << res << std::endl;
    return 0;
}
