#include <vector>
#include <queue>
#include <stdio.h>
using namespace std;

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);

    vector<vector<int> > graph(n);
    for (int i = 0 ; i < m; ++i) {
        int a, b;
        scanf("%d %d", &a, &b);
        --a, --b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<int> dist(n, -1);
    queue<int> que;
    vector<int> pre(n, -1);

    dist[0] = 0;
    que.push(0);

    while(!que.empty()) {
        int u = que.front();
        que.pop();
        for (int v : graph[u]) {
            if (dist[v] != -1)
                continue ;
            dist[v] = dist[u] + 1;
            que.push(v);
            pre[v] = u;
        }
    }

    printf("Yes\n");
    for (int i = 1; i < n; ++i)
        printf("%d\n", (pre[i] + 1));
}
