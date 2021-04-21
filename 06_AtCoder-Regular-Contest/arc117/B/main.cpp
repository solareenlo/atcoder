#include <bits/stdc++.h>
using namespace std;
int64_t a[1000001], n, res=1;
int main() {
	cin >> n;
	for (int i=1; i<=n; i++) cin>>a[i];
	sort(a+1, a+n+1);
	for (int i=1; i<=n; i++) (res*=(a[i]-a[i-1]+1))%=1000000007;
	cout<<res<<'\n';
	return 0;
}
