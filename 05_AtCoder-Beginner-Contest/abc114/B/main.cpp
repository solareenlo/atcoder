#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	string s; cin >> s;
	int n = s.size();
	int mini = 1000;
	REP(i, n-2) {
		string sub = s.substr(i, 3);
		mini = min(mini, abs(stoi(sub) - 753));
	}
	cout << mini << '\n';
	return 0;
}
