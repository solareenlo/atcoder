#include "bits/stdc++.h"
using namespace std;

int main(void) {
	string num;
	cin >> num;
	for (char a : num)
		if (a == '7') {
			cout << "Yes" << endl;
			return 0;
		}
	cout << "No" << endl;
	return 0;
}
