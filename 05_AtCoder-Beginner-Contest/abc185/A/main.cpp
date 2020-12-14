#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, d; cin >> a >> b >> c >> d;
	cout << min(a, min(b, min(c, d))) << '\n';
    return 0;
}
