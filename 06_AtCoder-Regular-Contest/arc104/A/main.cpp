#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

int main() {
	int a, b; cin >> a >> b;
	int x = (a + b) / 2;
	int y = a - x;
	cout << x << " " << y << '\n';
    return 0;
}
