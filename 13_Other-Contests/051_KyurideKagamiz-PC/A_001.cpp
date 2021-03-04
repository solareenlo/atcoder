#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int res = 0;
  for (int i=1; i<=n; i++) {
    int a; cin >> a;
    res += max(0, a-i);
  }
  cout << res << '\n';
  return 0;
}
