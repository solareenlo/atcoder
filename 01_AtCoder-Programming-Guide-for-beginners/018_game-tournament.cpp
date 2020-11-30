#include "bits/stdc++.h"
using namespace std;

void output_2vec_char(int N, vector<vector<char> >& data) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (j != N-1)
				cout << data.at(i).at(j) << ' ';
			else
				cout << data.at(i).at(j);
		}
		cout << endl;
	}
}

int main(void) {
	int N, M;
	cin >> N >> M;
	vector<int> A(M), B(M);
	for (int i = 0; i < M; i++)
		cin >> A.at(i) >> B.at(i);
	vector<vector<char> > data(N, vector<char>(N, '-'));
	for (int i = 0; i < M; i++) {
		data.at(A.at(i) - 1).at(B.at(i) - 1) = 'o';
		data.at(B.at(i) - 1).at(A.at(i) - 1) = 'x';
	}
	output_2vec_char(N, data);
	return 0;
}
