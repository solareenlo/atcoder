#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t n, m, c, res{};
  cin >> n >> m;
  set<int64_t> s = {(int64_t)-1e14, m, (int64_t)1e14};
  while (n--) {
    cin >> c;
    auto itr = s.lower_bound(c);
    res += min(abs(c-*itr), abs(c-*prev(itr)));
    s.insert(c);
  }
  cout << res << '\n';
  return 0;
}
