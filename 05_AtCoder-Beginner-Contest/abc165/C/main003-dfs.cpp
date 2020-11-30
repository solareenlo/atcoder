#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int n, m, q;
vector<int> a, b, c, d;
int ans;

void dfs(vector<int> g) {
    if (g.size() == n + 1) {
        int sum = 0;
        REP(i, q)
            if (g[b[i]] - g[a[i]] == c[i])
                sum += d[i];
        ans = max(ans, sum);
        return ;
    }
    g.push_back(g.back());
    while (g.back() <= m) {
        dfs(g);
        g.back()++;
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m >> q;

    a = b = c = d = vector<int>(q);
    REP(i, q) cin >> a[i] >> b[i] >> c[i] >> d[i];

    dfs(vector<int>(1, 1));
    cout << ans << '\n';
    return 0;
}
