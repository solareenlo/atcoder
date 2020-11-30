#include <iostream>
#include <vector>
#include <queue>

int main(void) {
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);

    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int> > graph(n);
    for (int i = 0; i < m; ++i) {
        int a, b;
        std::cin >> a >> b;
        --a, --b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    std::vector<int> dist(n, -1);
    std::queue<int> que;
    std::vector<int> pre(n, -1);

    dist[0] = 0;
    que.push(0);

    while (!que.empty()) {
        int v = que.front();
        que.pop();
        for (int u : graph[v]) {
            if (dist[u] != -1)
                continue ;
            dist[u] = dist[v] + 1;
            que.push(u);
            pre[u] = v;
        }
    }

    std::cout << "Yes" << std::endl;
    for (int i = 1; i < n; ++i)
        std::cout << pre[i] + 1 << std::endl;
    return 0;
}
