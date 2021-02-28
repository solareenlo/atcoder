#include <bits/stdc++.h>
#define int int64_t
using namespace std;
int n, res;

int score(string s) {
  int n[10] = {};
  iota(n, n+10, 0);
  for (char c : s) n[c-'0'] *= 10;
  return accumulate(n, n+10, 0);
}

signed main() {
  string s, t; cin >> n >> s >> t;
  vector<int> cnt(10, n);
  for (char c : s+t) cnt[c-'0']--;
  for (int x=1; x<10; x++) for (int y=1; y<10; y++) {
    s.back() = x+'0';
    t.back() = y+'0';
    if (score(s) <= score(t)) continue;
    res += cnt[x]*(cnt[y]-(x==y));
  }
  cout << double(res)/(9*n-8)/(9*n-9) << '\n';
  return 0;
}
