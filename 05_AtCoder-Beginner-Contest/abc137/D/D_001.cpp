#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
	int n, m; cin >> n >> m;
	vector<int> job[100001];
	REP(i, n) {
		int a, b; cin >> a >> b;
		job[a-1].push_back(b);
	}
	int res = 0;
	priority_queue<int> q;
	REP(i, m) {
		for (auto j : job[i]) q.push(j);
		if (q.size()) {
			res += q.top();
			q.pop();
		}
	}
	cout << res << '\n';
    return 0;
}
