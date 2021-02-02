#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c; cin >> a >> b >> c;
	int n; cin >> n;
	int A = n-a;
	int B = 2*n-b;
	int C = 3*n-c;
	cout << max(0, A) << " ";
	cout << max(0, B) << " ";
	cout << max(0, C) << '\n';
	return 0;
}
