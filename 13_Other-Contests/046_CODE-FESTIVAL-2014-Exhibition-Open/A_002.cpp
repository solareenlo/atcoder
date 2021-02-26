#include <bits/stdc++.h>
#include <atcoder/all>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using namespace atcoder;
pair<int, int> e[2000];
int g[2000][2000], y[2000], sum[2000];
int main() {
  int n, m; cin >> n >> m;
  REP(i, m) {
    int a, b; cin >> a >> b;
    e[i] = {--a, --b};
    g[a][b] = g[b][a] = true;
  }
  REP(i, n) cin >> y[i], y[i]--;
  dsu d(n);
  REP(i, m) {
    auto [a, b] = e[i];
    REP(j, n) if (g[a][j] && g[b][j])
      d.merge(a, b), d.merge(a, j);
  }
  REP(i, n) if (d.leader(i)!=d.leader(y[i])) return cout << "NO" << '\n', 0;
  REP(i, n) for (int j=i+1; j<n; j++)
    if(d.leader(i)==d.leader(j) && y[i]>y[j]) sum[d.leader(i)]++;
  REP(i, n) if (sum[i]%2) return cout << "NO" << '\n', 0;
  cout << "YES" << '\n';
  return 0;
}
