#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int num[4] = {};
	string points; cin >> points;
	for (int i = 0; i < n; i++)
		num[points[i]-'0'-1]++;
	cout << *max_element(num, num+4) << " " << *min_element(num, num+4) << '\n';
	return 0;
}
