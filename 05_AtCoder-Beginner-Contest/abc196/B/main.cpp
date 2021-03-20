#include <bits/stdc++.h>
using namespace std;

int main() {
	string x; cin >> x;
	string::size_type pos = x.find('.');
	cout << ((pos == string::npos) ? x : x.substr(0, x.find('.'))) << '\n';
    return 0;
}
