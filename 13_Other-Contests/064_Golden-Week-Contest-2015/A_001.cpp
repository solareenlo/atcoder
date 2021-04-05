#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main() {
	int p[9] = {25,39,51,76,163,111,128,133,138};
	set<int> st;
	REP(bit, 1<<9) {
		int sum = 0;
		REP(i, 9)
			if (bit>>i&1) sum += p[i];
		st.insert(sum);
		st.insert(sum+58);
		st.insert(sum+136);
	}
	for (auto a : st)
		cout << a << '\n';
	return 0;
}
