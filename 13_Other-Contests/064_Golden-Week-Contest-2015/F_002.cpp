#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n], sum = 0;
	for (int i=0; i<n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	sort(a, a+n);
	if ((n%2 && sum%2) || (n%2==0 && (a[0]%2 || sum%2)))
		cout << "Iori" << '\n';
	else
		cout << "Yayoi" << '\n';
	return 0;
}
