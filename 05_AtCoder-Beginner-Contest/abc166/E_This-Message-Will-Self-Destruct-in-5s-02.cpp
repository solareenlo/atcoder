#include "bits/stdc++.h"
using namespace std;
using ll = long long;

int main(void) {
    int N;
    cin >> N;
    multimap<int, int> L;
    multimap<int, int> R;
    map<int, bool> X;
    for (int i = 0; i < N; i++) {
        int tmp = 0;
        cin >> tmp;
        L.emplace(i + tmp, i);
        R.emplace(i - tmp, i);
        X.emplace(i + tmp, false);
        X.emplace(i - tmp, false);
    }
    ll count_L = 0;
    ll count_R = 0;
    ll count = 0;
    for (auto itr = X.begin(); itr != X.end(); ++itr) {
        count_L = L.count(itr->first);
        count_R = R.count(itr->first);
        auto l = L.equal_range(itr->first);
        if (count_L > 0 && count_R > 0)
            count += count_L * count_R;
    }
    cout << count << endl;
    return 0;
}
