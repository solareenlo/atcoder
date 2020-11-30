#include <iostream>
#include <climits>
#include <cmath>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long n, k;
    cin >> n >> k;

    long long ans = LLONG_MAX;
    int count = 0;
    while (true) {
        n = min(n % k, abs(n - k));
        if (ans > n) {
            ans = n;
            count = 0;
        } else
            count++;
        if (count == 2) break ;
    }
    cout << ans << '\n';
    return 0;
}
