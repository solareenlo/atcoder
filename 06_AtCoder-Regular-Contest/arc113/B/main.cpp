#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

int main() {
	int a, b, c; cin >> a >> b >> c;
	cout << pow_mod(a, pow_mod(b, c, 4)+4, 10) << '\n';
    return 0;
}
