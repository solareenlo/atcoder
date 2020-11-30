#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<vector<int> > graph(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
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

    cout << "Yes" << endl;
    for (int i = 1; i < n; ++i)
        cout << pre[i] + 1 << '\n';
    return 0;
}
