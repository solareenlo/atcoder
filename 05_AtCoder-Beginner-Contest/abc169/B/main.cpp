#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
namespace mp = boost::multiprecision;
using Bint = mp::cpp_int;
using ll = long long;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<ll> a(n);
    REP(i, n) cin >> a[i];
    sort(a.begin(), a.end());

    Bint sum = 1;
    REP(i, n) {
        sum *= a[i];
        if (sum > ll(1e18)) {
            sum = -1;
            break ;
        }
    }

    cout << sum << '\n';
    return 0;
}
