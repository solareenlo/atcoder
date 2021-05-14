#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> res = {6, 10, 15};
	for (int i=16; (int)res.size()<n; i++)
		if (i%6==0 || i%10==0 || i%15==0)
			res.push_back(i);
	for (int x : res)
		cout << x << " ";
	return 0;
}
