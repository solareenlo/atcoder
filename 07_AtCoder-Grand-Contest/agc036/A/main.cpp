#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll s; cin >> s;
	const ll a = 1000000000;
	ll x = (a - s % a) % a;
	ll y = (s + x) / a;
	cout << "0 0 1000000000 1 " << x << " " << y << '\n';
    return 0;
}
