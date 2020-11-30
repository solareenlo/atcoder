#include "bits/stdc++.h"
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using VVI = vector<vector<int> >;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    VVI to(n);
    REP(i, m) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        to[a].push_back(b);
        to[b].push_back(a);
    }

    vector<int> dist(n, -1);
    vector<int> pre(n, -1);
    queue<int> que;

    dist[0] = 0;
    que.push(0);

    while (!que.empty()) {
        int v = que.front();
        que.pop();
        for (int nv : to[v]) {
            if (dist[nv] != -1) continue;
            dist[nv] = dist[v] + 1;
            pre[nv] = v;
            que.push(nv);
        }
    }

    cout << "Yes" << '\n';
    for (int i = 1; i < n; i++)
        cout << pre[i] + 1 << '\n';
    return 0;
}
