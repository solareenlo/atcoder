#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x; cin >> n >> x;
	queue<int> q;
	while (n--) {
		int a; cin >> a;
		if (a != x) q.push(a);
	}
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
    return 0;
}
