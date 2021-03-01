#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<string> a(n);
    for (auto &x : a) cin >> x;
    int res = 0;
    for (; res<1010101 && (int)a.size()>=2; res++) {
      char c = a[1][0];
      a[1].erase(0, 1);
      int p = a[0].find(c);
      if (p != string::npos) a[0].erase(p, 1);
      else a[0].push_back(c);
      bool next = true;
      if (a[1].empty()) a.erase(a.begin()+1);
      if (a[0].empty()) a.erase(a.begin()+0), next = false;
      if (next) rotate(a.begin(), a.begin()+1, a.end());
    }
    cout << ((res==1010101)? -1 : res) << '\n';
  }
  return 0;
}
