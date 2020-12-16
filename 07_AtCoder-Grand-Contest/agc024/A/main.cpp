#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t a, b, c, k; cin >> a >> b >> c >> k;
	cout << ((k%2) ? b-a : a-b) <<'\n';
	return 0;
}
