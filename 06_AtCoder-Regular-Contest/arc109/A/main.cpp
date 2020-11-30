#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, x, y; cin >> a >> b >> x >> y;
	int res = 0;
	if (a == b) res = x;
	else if (a > b) res = min(x + (a-b-1)*y, x*((a-b)*2-1));
	else if (a < b) res = min(x + (b-a)*y, x*((b-a+1)*2-1));
	cout << res << '\n';
    return 0;
}
