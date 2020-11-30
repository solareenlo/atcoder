#include "bits/stdc++.h"
using namespace std;

int main() {
	string str;
	cin >> str;

	int i;
	int count_p;
	int count_m;
	int count_one;
	count_p = 0;
	count_m = 0;
	count_one = 0;
	for (i = 0; i < str.size(); i++) {
		if (str.at(i) == '1')
			count_one += 1;
		else if (str.at(i) == '+')
			count_p += 1;
		else if (str.at(i) == '-')
			count_m += 1;
	}
	cout << 1 + count_p - count_m << endl;
	return 0;
}
