#include <bits/stdc++.h>
using namespace std;

int main() {
	int k; cin >> k;
	int res = 0;
	for (int i=1; i<=k; i++)
		for (int j=1; j<=k/i; j++)
			for (int l=1; l<=k/i/j; l++)
				res++;
	cout << res << '\n';
	return 0;
}
