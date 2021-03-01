#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    queue<string> p;
    while (n--) {
      string tmp; cin >> tmp;
      p.push(tmp);
    }
    int cnt = 0;
    for (; p.size()!=1 && cnt<1e6; cnt++) {
      string tmp = p.front(); p.pop();
      char c = p.front()[0];
      p.front().erase(0, 1);
      if (p.front().empty()) p.pop();
      if (tmp.find(c) != -1) tmp.erase(tmp.find(c), 1);
      else tmp += c;
      if (!tmp.empty()) p.push(tmp);
    }
    cout << ((cnt>=1e6) ? -1 : cnt) << '\n';
  }
  return 0;
}
