#include "bits/stdc++.h"
using namespace std;

int main(void) {
	int N;
	cin >> N;
	set<string> S;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		S.insert(str);
	}
	cout << S.size() << endl;
	return 0;
}
