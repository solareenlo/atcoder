#include <bits/stdc++.h>
using namespace std;

int main() {
	char y[5], m[3], d[3];
	scanf("%4s/%2s/%2s", y, m, d);
	string yy = d;
	yy += m;
	sort(y, y+4);
	sort(yy.begin(), yy.end());
	cout << ((y==yy) ? "yes" : "no") << '\n';
	return 0;
}
