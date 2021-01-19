#include <bits/stdc++.h>
using namespace std;

int main() {
	int Ma, Da, Mb, Db; cin >> Ma >> Da >> Mb >> Db;
	int day[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int res = 0;
	if (Ma == Mb) res = Db - Da;
	else {
		res += day[Ma] - Da;
		for (int i = 1; i < Mb - Ma; i++) {
			res += day[Ma+i];
		}
		res += Db;
	}
	cout << res << '\n';
	return 0;
}
