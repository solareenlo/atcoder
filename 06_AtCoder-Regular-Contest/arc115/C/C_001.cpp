#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	for (int i=1; i<=n; i++)
		cout << int(log2(i))+1 << " ";
    return 0;
}
