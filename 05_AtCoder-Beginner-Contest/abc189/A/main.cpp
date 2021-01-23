#include <bits/stdc++.h>
using namespace std;

int main() {
	string c; cin >> c;
	cout << ((c[0] == c[1] && c[1] == c[2]) ? "Won" : "Lost") << '\n';
    return 0;
}
