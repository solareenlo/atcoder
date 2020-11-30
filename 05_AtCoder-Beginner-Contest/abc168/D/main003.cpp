#include <iostream>
#include <queue>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<vector<int> > dp(n);
    REP(i, m) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        dp[a].push_back(b);
        dp[b].push_back(a);
    }

    vector<int> dist(n, -1);
    queue<int> q;
    vector<int> pre(n, -1);

    dist[0] = 0;
    q.push(0);

    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (auto i : dp[v]) {
            if (dist[i] != -1) continue ;
            dist[i] = dist[v] + 1;
            q.push(i);
            pre[i] = v;
        }
    }

    cout << "Yes" << '\n';
    REP(i, n) {
        if (i == 0) continue ;
        cout << pre[i] + 1 << '\n';
    }
    return 0;
}
