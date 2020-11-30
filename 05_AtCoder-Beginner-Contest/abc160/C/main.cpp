#include <iostream>
#include <cmath>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int k, n;
    cin >> k >> n;
    vector<int> a(n);
    REP(i, n) cin >> a[i];

    int maxi = 0;
    REP(i, n - 1) maxi = max(maxi, abs(a[i] - a[i+1]));

    int tmp = k - a[n-1] + a[0];
    maxi = max(maxi, tmp);

    cout << k - maxi << '\n';
    return 0;
}
