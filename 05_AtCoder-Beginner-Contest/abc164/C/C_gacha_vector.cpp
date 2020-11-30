#include "bits/stdc++.h"
using namespace std;

int main(void) {
	int N;
	cin >> N;
	vector<string> S;
	string str;
	for (int i = 0; i < N; i++) {
		cin >> str;
		S.push_back(str);
	}
	sort(S.begin(), S.end());
	S.erase(unique(S.begin(), S.end()), S.end());
	cout << S.size() << endl;
	return 0;
}
