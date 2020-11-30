#include <algorithm>
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<int> a(5);
    REP(i, 5) cin >> a[i];
    sort(a.begin(), a.end());

    int k; cin >> k;

    if (a[4] - a[0] <= k) cout << "Yay!" << '\n';
    else cout << ":(" << '\n';

    return 0;
}
