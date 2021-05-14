#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> v;
	for (int i=1; i<=1e4; i++)
		if ((i%2==0)+(i%3==0)+(i%5==0)>1 && i!=12)
			v.push_back(i);
	for (int i=0; i<n; i++)
		cout << v[i] << " ";
    return 0;
}
