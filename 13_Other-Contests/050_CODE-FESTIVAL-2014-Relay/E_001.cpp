#include <bits/stdc++.h>
using namespace std;
int h, w, res;
int main() {
  cin >> h >> w;
  for (int i = 0; i < h*w; i++) {
    char c; cin >> c;
    if (c != '.') res += c-'0';
  }
  cout << res << '\n';
  return 0;
}
