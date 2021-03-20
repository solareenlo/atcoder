#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, d; cin >> a >> b >> c >> d;
	cout << max(a-c, max(b-c, max(a-d, b-d))) << '\n';
    return 0;
}
