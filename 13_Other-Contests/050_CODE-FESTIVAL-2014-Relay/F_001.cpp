#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
  int n; cin >> n;
  vector<vector<int> > e(n);
  vector<int> cnt(n, 0);
  REP(i, n) {
    int u, v; cin >> u >> v;
    e[--u].push_back(--v);
    e[v].push_back(u);
    cnt[u]++;
    cnt[v]++;
  }
  int res = n;
  REP(i, n) if (cnt[i] == 1) {
    int j = i;
    while (cnt[j] == 1) {
      res--;
      cnt[j] = 0;
      for (int &k : e[j]) {
        cnt[k]--;
        if (cnt[k] == 1) {
          j = k;
          break ;
        }
      }
    }
  }
  cout << res << '\n';
  return 0;
}
