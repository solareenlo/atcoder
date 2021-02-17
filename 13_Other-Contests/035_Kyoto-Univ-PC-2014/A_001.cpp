#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[3], b[3];
	cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];
	sort(a, a+3);
	sort(b, b+3);
	cout << abs(b[0]-a[0])+abs(b[1]-a[1])+abs(b[2]-a[2]) << '\n';
	return 0;
}
