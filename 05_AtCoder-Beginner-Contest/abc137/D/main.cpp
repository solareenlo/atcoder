#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	vector<int> job[100001];
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		if (m-a+1>0)
			job[m-a+1].push_back(b);
	}
	int res = 0;
	priority_queue<int> q;
	for (int i = m; i > 0; i--) {
		for (auto j : job[i]) q.push(j);
		if (q.size()) {
			res += q.top();
			q.pop();
		}
	}
	cout << res << '\n';
	return 0;
}
