#include <bits/stdc++.h>
using namespace std;
int n, x;
int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s; cin >> s;
    for (char c : s)
      if (c == 'X') x += i;
      else if (c == 'Y') x -= n-i-1;
  }
  cout << (x?(x>0?"X":"Y"):"Impossible") << '\n';
  return 0;
}
