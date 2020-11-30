#include "bits/stdc++.h"
using namespace std;

vector<int> reverse_array_from_i(vector<int> &data, int i) {
	if (i == data.size()) {
		vector<int> empty_array(0);
		return empty_array;
	}

	vector<int> tmp = reverse_array_from_i(data, i + 1);
	tmp.push_back(data.at(i));
	return tmp;
}

vector<int> reverse_array(vector<int> &data) {
	return reverse_array_from_i(data, 0);
}

int main(void) {
	vector<int> a = {1, 2, 3, 4, 5};
	vector<int> b = reverse_array(a);
	for (int i = 0; i < a.size(); i++)
		cout << a.at(i) << ' ';
	cout << endl;
	for (int i = 0; i < b.size(); i++)
		cout << b.at(i) << ' ';
	cout << endl;
	return 0;
}
