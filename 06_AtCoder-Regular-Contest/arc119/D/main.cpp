#include <bits/stdc++.h>
using namespace std;

void output(vector<int> &a) {
	cout << a.size();
	for (int &x : a)
		cout << " " << x;
	cout << "\n";
}

int main() {
	int n; cin >> n;
	vector<int> a(n);
	for (int &x : a) cin >> x;
	vector<int> b[200];
	int cnt = min(n, 8);
	for (int bit=1; bit<(1<<cnt); bit++) {
		int sig = 0;
		vector<int> s;
		for (int i=0; i<cnt; i++) if (bit&(1<<i)) {
			s.push_back(i+1);
			(sig += a[i]) %= 200;
		}
		if (b[sig].size() != 0) {
			cout << "Yes" << '\n';
			output(b[sig]);
			output(s);
			return (0);
		}
		else
			b[sig] = s;
	}
	cout << "No" << '\n';
    return 0;
}
