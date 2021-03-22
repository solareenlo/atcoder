#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	for (int i=1; i<=n; i++)
		cout << 32-__builtin_clz(i) << " ";
	return 0;
}
