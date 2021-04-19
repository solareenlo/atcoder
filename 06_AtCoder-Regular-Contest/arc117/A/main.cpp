#include <bits/stdc++.h>
#define REP(i, n) for (int i = 1; i < (n); i++)
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	int sum = 0;
	REP(i, a) cout << i << " ", sum+=i;
	REP(i, b) cout << -i << " ", sum-=i;
	if (a>b) cout << a << " " << -sum-a;
	else if (a<b) cout << -b << " " << -sum+b;
	else cout << a << " " << -b;
    return 0;
}
