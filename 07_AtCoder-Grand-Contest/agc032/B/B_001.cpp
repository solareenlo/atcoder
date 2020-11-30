#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;

int main() {
	int n; cin >> n;
	int m = n;
	if (n % 2 == 0) m++;
	vector<P> a;
	for (int i = 1; i <= n; i++)
		for (int j = i+1; j <= n; j++)
			if ((i+j) != m)
				a.push_back({i, j});
	cout << a.size() << '\n';
	for(P x : a)
		cout << x.first << " " << x.second << '\n';
    return 0;
}
