#include "bits/stdc++.h"
using namespace std;

int main(void) {
	int N;
	cin >> N;
	map<string, bool> S;
	int num = 0;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		if (S[str] == false)
			num++;
		S[str] = true;
	}
	cout << num << endl;
	return 0;
}
