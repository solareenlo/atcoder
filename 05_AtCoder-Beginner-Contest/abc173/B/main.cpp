#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n;
	cin >> n;
	map<string, int> res;
	res.insert(make_pair("AC", 0));
	res.insert(make_pair("WA", 0));
	res.insert(make_pair("TLE", 0));
	res.insert(make_pair("RE", 0));
	REP(i, n) {
		string tmp;
		cin >> tmp;
		res[tmp]++;
	}

	cout << "AC x " <<  res["AC"] << '\n';
	cout << "WA x " <<  res["WA"] << '\n';
	cout << "TLE x " <<  res["TLE"] << '\n';
	cout << "RE x " <<  res["RE"] << '\n';
    return 0;
}
