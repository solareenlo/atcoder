#include <bits/stdc++.h>
using namespace std;

int main() {
	int l; cin >> l;
	long long res = 1;
	for (int i = 1; i < 12; i++)
		res *= l-i, res /= i;
	cout << res << '\n';
    return 0;
}
