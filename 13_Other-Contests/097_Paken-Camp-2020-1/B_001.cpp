#include <bits/stdc++.h>
using namespace std;

int main() {
	string x; cin >> x;
	char c = '0';
	for (char a : x) c = max(c, a);
	cout << c << '\n';
	return 0;
}
