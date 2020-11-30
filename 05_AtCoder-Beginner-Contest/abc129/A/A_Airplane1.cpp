#include "bits/stdc++.h"
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);
    vector<int> dist;
    for (int i = 0; i < 3; i++) {
        int tmp;
        cin >> tmp;
        dist.push_back(tmp);
    }
    sort(dist.begin(), dist.end());
    cout << dist.at(0) + dist.at(1) << '\n';
    return 0;
}
