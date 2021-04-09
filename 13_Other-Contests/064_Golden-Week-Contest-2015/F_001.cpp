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
	if (n%2)
		cout << (sum%2?"Iori":"Yayoi") << '\n';
	else if (a[0]%2)
		cout << "Iori" << '\n';
	else
		cout << (sum%2?"Iori":"Yayoi") << '\n';
	return 0;
}
