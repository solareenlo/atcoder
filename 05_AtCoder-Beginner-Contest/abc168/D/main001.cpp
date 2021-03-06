#include <iostream>
#include <queue>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<vector<int> > dp(n);
    REP(i, m) {
        int a, b;
        cin >> a >> b;
        --a;
        --b;
        dp[a].push_back(b);
        dp[b].push_back(a);
    }

    queue<int> q;
    vector<int> dist(n, -1);
    vector<int> pre(n, -1);

    q.push(0);
    dist[0] = 0;

    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int i : dp[v]) {
            if (dist[i] != -1) continue ;
            dist[i] = dist[v] + 1;
            q.push(i);
            pre[i] = v;
        }
    }

    cout << "Yes" << '\n';
    for (int i = 1; i < n; i++)
        cout << pre[i] + 1 << '\n';
    return 0;
}
