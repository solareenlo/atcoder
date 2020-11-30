#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using mint = modint998244353;

int main() {
	int A, B, C; cin >> A >> B >> C;
	mint a = A;
	mint b = B;
	mint c = C;
	mint sumB = b * (1 + b) / 2;
	mint sumA = a * (1 + a) / 2;
	mint sumC = c * (1 + c) / 2;
	mint res = sumA * sumB * sumC;
	cout << res.val() << '\n';
	return 0;
}
