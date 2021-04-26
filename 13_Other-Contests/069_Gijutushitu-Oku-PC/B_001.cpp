#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int res, maxi=-1, i=0, a;
	while (++i, cin >> a)
		if (a > maxi) maxi=a, res=i;
	cout << res << endl;
	return 0;
}
