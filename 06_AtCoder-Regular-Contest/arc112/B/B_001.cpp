#include <bits/stdc++.h>
using namespace std;

inline pair<long, long> exact(const long b, const long c) {
	const auto n = c / 2;
	if (c % 2) return {-b - n, -b + n};
	else {
		if (c) return {b - n, b + n - 1};
		else return {b, b};
	}
}

int main() {
	long B, C; cin >> B >> C;
	const auto [a, b] = exact(B, C);
	const auto [c, d] = exact(B, C-1);
	cout << (b-a+1)+(d-c+1)-max(0L, min(b,d)-max(a,c)+1) << '\n';
    return 0;
}
