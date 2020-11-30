#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<vector<int> > bfs(n);
    REP(i, m) {
        int a, b;
        cin >> a >> b;
        bfs[a - 1].push_back(b - 1);
    }

    bool ans = false;
    REP(i, bfs[0].size()) {
        REP(j, bfs[bfs[0][i]].size()) {
            if (bfs[bfs[0][i]][j] == n - 1)
                ans = true;
            if (ans) break ;
        }
        if (ans) break ;
    }

    if (ans) cout << "POSSIBLE" << '\n';
    else cout << "IMPOSSIBLE" << '\n';
    return 0;
}
