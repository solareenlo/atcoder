#include <bits/stdc++.h>
using namespace std;

vector<int> g[100001];
int d[100001];

int dfs(int u, int p, int D) {
  d[u] = D;
  for (int e : g[u]) {
    if (e == p) continue;
    if (d[e]) return D - d[e] + 1;
    else {
      int x = dfs(e, u, D + 1);
      if (x) return x;
    }
  }
  return 0;
}

int main() {
  int n; cin >> n;
  while (n--) {
    int x, y; cin >> x >> y;
    g[x].push_back(y);
    g[y].push_back(x);
  }
  cout << dfs(1, 0, 1) << '\n';
  return 0;
}
