#include <algorithm>
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main(void) {
   cin.tie(0);
   ios::sync_with_stdio(false);

   int n;
   cin >> n;

   vector<int> h(n);
   REP(i, n)
       h[i] = i;

   decltype(h)::iterator itrMin = min_element(h.begin(), h.end());
   size_t indexMin = distance(h.begin(), itrMin);
   cout << indexMin + 1 << '\n';

   decltype(h)::iterator itrMax = max_element(h.begin(), h.end());
   size_t indexMax = distance(h.begin(), itrMax);
   cout << indexMax + 1 << '\n';

   return 0;
}
