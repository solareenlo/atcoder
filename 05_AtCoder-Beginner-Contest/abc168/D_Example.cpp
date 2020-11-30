#include "bits/stdc++.h"
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const int INF = 1001001001;
vector<int> to[100005];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    REP(i, m) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        to[a].push_back(b);
        to[b].push_back(a);
    }

    queue<int> q;
    vector<int> dist(n, INF);
    vector<int> pre(n, -1);

    dist[0] = 0;
    q.push(0);

    while(!q.empty()) {
        int v = q.front();
        q.pop();
        for (int u : to[v]) {
            if (dist[u] != INF)
                continue ;
            dist[u] = dist[v] + 1;
            pre[u] = v;
            q.push(u);
        }
    }

    cout << "Yes" << '\n';
    REP(i, n) {
        if (i == 0)
            continue ;
        int ans = pre[i];
        ++ans;
        cout << ans << '\n';
    }
    return 0;
}
