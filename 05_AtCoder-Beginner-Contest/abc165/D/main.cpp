#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll a, b, n;
    cin >> a >> b >> n;

    ll x;
    if(n < b - 1) x = n;
    else x = b - 1;

    ll ans = floor(a * (x % b) / b);

    cout << ans << '\n';
    return 0;
}
