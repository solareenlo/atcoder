#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t n; cin >> n;
  set<int64_t> s;
  for (int64_t i=2; i*i<=n; i++) {
    int64_t x = i * i;
    while (x<=n) {
      s.insert(x);
      x *= i;
    }
  }
  cout << n-(int64_t)s.size() << '\n';
  return 0;
}
