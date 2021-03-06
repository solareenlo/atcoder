#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	int ret = 4;
	if (a+b >= 15 && b >= 8) ret = 1;
	else if (a+b >= 10 && b >= 3) ret = 2;
	else if (a+b >= 3) ret = 3;
	cout << ret << '\n';
    return 0;
}
