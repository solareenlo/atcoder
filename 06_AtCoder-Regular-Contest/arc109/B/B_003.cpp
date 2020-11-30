#include <bits/stdc++.h>
using namespace std;
long long n, i;
int main() {
	cin >> n;
	while (i*(i+1)<=2*(n+1)) i++;
	cout << n-i+2 << '\n';
	return 0;
}
