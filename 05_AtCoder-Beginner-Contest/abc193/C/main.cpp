#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t n; cin >> n;
  set<int64_t> s;
  for (int64_t i=2; i*i<=n; i++)
    for (int64_t j=i*i; j<=n; j*=i)
      s.insert(j);
  cout << n-(int64_t)s.size() << '\n';
  return 0;
}
