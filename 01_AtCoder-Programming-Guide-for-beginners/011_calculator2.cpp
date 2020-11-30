#include "bits/stdc++.h"
using namespace std;

int main() {
	int N, A;
	cin >> N >> A;
	string OPE;
	int NUM;
	int i;
	i = 0;
	while (i < N) {
		cin >> OPE >> NUM;
		if (OPE == "/" && NUM == 0) {
			cout << "error" << endl;
			break ;
		}
		i++;
		if (OPE == "+")
			A += NUM;
		if (OPE == "-")
			A -= NUM;
		if (OPE == "*")
			A *= NUM;
		if (OPE == "/")
			A /= NUM;
		cout << i << ":" << A << endl;
	}
	return 0;
}
