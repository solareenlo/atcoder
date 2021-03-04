#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, res{}, i{}; cin >> n;
  while (cin >> a)
    res += max(0, a-++i);
  cout << res << '\n';
  return 0;
}
