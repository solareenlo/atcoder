#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main(void) {
   cin.tie(0);
   ios::sync_with_stdio(false);

   int n, t, a;
   cin >> n >> t >> a;

   vector<double> h(n);
   REP(i, n) {
       double tmp;
       cin >> tmp;
       h[i] = abs(a - ((double)t - tmp * 0.006));
   }

   decltype(h)::iterator itr = min_element(h.begin(), h.end());
   size_t indexMin = distance(h.begin(), itr);
   cout << indexMin + 1 << '\n';
   return 0;
}
