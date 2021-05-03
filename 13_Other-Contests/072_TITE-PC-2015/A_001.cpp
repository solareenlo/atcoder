#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	cout << (s[2]=='B'?"Bachelor":s[2]=='M'?"Master":"Doctor") << " ";
	cout << s[0] << s[1] << '\n';
	return 0;
}
