#include <algorithm>
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    vector<int> h(n);
    REP(i, n) cin >> h[i];

    sort(h.begin(), h.end());

    long long sum = 0;
    REP(i, n - k) sum += h[i];

    cout << sum << '\n';
    return 0;
}
