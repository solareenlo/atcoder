#include <bits/stdc++.h>
using namespace std;

int main() {
	string n; cin >> n;
	while (n.back() == '0')
		n.pop_back();
	string m = n;
	reverse(m.begin(), m.end());
	cout << (n==m?"Yes":"No") << '\n';
	return 0;
}
