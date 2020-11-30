#include <iostream>
#include <vector>
#include <algorithm>
#define REP(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> a(n);
    REP(i, n)
        cin >> a[i];
    sort(a.begin(), a.end());
    cout << a[n - 1] - a[0] << '\n';
    return 0;
}
