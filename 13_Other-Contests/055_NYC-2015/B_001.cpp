#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> a(n);
	for (int &x : a) cin >> x;
	sort(a.begin(), a.end());
	int sum = 0, cnt = 0;
	for (int x : a) {
		if (x > sum) {
			sum += x;
			cnt++;
		}
	}
	cout << cnt << '\n';
	return 0;
}
