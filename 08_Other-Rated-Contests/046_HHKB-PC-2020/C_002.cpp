#include <bits/stdc++.h>
using namespace std;
int a[200001];
int main() {
	int n; cin >> n;
	int mini = 0;
	for (int i = 0; i < n; i++) {
		int p; cin >> p;
		a[p] = 1;
		while (a[mini])
			mini++;
		cout << mini << '\n';
	}
	return 0;
}
