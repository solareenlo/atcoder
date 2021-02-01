#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t	n; cin >> n;
	n*=2;
	int64_t	cnt=0;
	for (int64_t i=1; i*i<=n; i++)
		if (n%i==0 && (i%2||(n/i)%2))
			cnt++;
	cout << cnt*2 << '\n';
    return 0;
}
