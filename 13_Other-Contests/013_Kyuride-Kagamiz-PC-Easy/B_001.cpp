#include <bits/stdc++.h>
using namespace std;
int a[10], b[7], c[7];
int main() {
	int n; cin >> n;
	for (int &x : a) cin >> x;
	for (int i=0; i<n; i++) {
		string s; cin >> s;
		for (int j=0; j<7; j++) {
			if (s[j]=='X') c[j]++;
			else c[j]=0;
			b[j] = max(b[j], c[j]);
		}
	}
	sort(a, a+10);
	sort(b, b+7);
	bool ok=true;
	for(int i=0; i<7; i++) ok &= b[i]<=a[i+3];
	cout << (ok ? "YES" : "NO") << '\n';
	return 0;
}
