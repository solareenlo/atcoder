#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int res = 1e9+7;
  while (n--) {
    int a, p, x; cin >> a >> p >> x;
    if (a < x && p < res)
      res = p;
  }
  cout << ((res==1e9+7) ? -1 : res) << '\n';
  return 0;
}
