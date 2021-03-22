#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	for (int i=1; i<=n; i++) {
		int cnt=1;
		int a=i;
		for (int j=2; j*j<=i; j++)
			while (a%j==0)
				a/=j, cnt++;
		if (a>1) cnt++;
		cout << cnt << " ";
	}
	return 0;
}
