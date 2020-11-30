#include "bits/stdc++.h"
using namespace std;

int main() {
	int p;
	cin >> p;

	if (p == 1) {
		int price;
		cin >> price;
		int N;
		cin >> N;
		cout << price * N << endl;
	}

	if (p == 2) {
		string text;
		int price;
		cin >> text >> price;
		int N;
		cin >> N;
		cout << text << "!" << endl;
		cout << price * N << endl;
	}
}
