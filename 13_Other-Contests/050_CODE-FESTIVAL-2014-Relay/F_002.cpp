#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
  int n; cin >> n;
  vector<vector<int> > g(n);
  vector<int> cnt(n, 0);
  REP(i, n) {
    int x, y; cin >> x >> y;
    g[--x].push_back(--y);
    g[y].push_back(x);
    cnt[x]++;
    cnt[y]++;
  }
  queue<int> q;
  REP(i, n) if (cnt[i] == 1)
    q.push(i);
  int res = n;
  while (!q.empty()) {
    int u = q.front(); q.pop();
    for (auto e : g[u]) {
      cnt[e]--;
      if (cnt[e] == 1)
        q.emplace(e);
    }
    res--;
  }
  cout << res << '\n';
  return 0;
}
