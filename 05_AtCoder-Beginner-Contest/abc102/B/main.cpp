#include <algorithm>
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n; cin >> n;
    vector<long long> a(n);
    REP(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    cout << a[n - 1] - a[0] << '\n';
    return 0;
}
