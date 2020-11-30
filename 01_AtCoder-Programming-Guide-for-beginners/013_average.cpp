#include "bits/stdc++.h"
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> vec(N);
	int i;
	int sum;
	sum = 0;
	for (i = 0; i < N; i++) {
		cin >> vec.at(i);
		sum += vec.at(i);
	}

	int ave;
	ave = sum / vec.size();

	for (i = 0; i < N; i++) {
		if (vec.at(i) < ave)
			cout << ave - vec.at(i) << endl;
		else
			cout << vec.at(i) - ave << endl;
	}
	return 0;
}
