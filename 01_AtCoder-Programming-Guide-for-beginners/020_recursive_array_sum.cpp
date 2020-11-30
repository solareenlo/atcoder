// g++ -std=c++11 020_recursive_array_sum.cpp

#include "bits/stdc++.h"
using namespace std;

int array_sum_from_i(vector<int> &data, int i) {
	if (i == data.size())
		return 0;
	int s = array_sum_from_i(data, i + 1);
	return data.at(i) + s;
}

int array_sum(vector<int> &data) {
	// 0 から1ずつ増やしていって配列の個数まで再帰を行う．
	return array_sum_from_i(data, 0);
}

int main(void) {
	vector<int> a = {0, 2, 3, 5, 7};
	cout << array_sum(a) << endl;
	return 0;
}
