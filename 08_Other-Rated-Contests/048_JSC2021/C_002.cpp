#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c; cin >> a >> b;
	for (c=b; ; c--) if ((a-1+c)/c < b/c)
		break ;
	cout << c << '\n';
	return 0;
}
