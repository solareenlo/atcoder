#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);

	int n, m; cin >> n >> m;
	int x, y; cin >> x >> y;
	queue<int> a, b;
	REP(i, n) {
		int t; cin >> t;
		a.push(t);
	}
	REP(i, m) {
		int t; cin >> t;
		b.push(t);
	}

	int cnt = 0;
	char flag = 'a';
	while (true) {
		int A = a.front();
		int B = b.front();
		if (flag == 'a') {
			if (A + x <= B) {
				cnt++;
				a.pop();
				flag = 'b';
			} else
				b.pop();
		} else {
			if (B + y <= A) {
				cnt++;
				b.pop();
				flag = 'a';
			} else
				a.pop();
		}
		if (!a.size() || !b.size())
			break ;
	}

	if (b.size()) cnt++;
	cout << cnt / 2 << '\n';
    return 0;
}
