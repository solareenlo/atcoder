#include <iostream>
#include <vector>
#include <cstring>
#define REP(i, n) for (int i = 0; i < (n); i++)

int res;
std::vector<int> G[2001];
bool    seen[2001];

void    dfs(int v) {
    seen[v] = true;
    res++;
    for (auto u : G[v])
        if (!seen[u])
            dfs(u);
}

int main() {
    int n, m; std::cin>> n >> m;
    REP(i, m) {
        int u, v; std::cin >> u >> v;
        G[u].emplace_back(v);
    }
    REP(i, n) {
        memset(seen, false, sizeof(seen));
        dfs(i+1);
    }
    std::cout << res << std::endl;
    return 0;
}
