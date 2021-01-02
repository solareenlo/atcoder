#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	string A, B; cin >> A >> B;
	int a = 0, b = 0;
	REP(i, (int)A.size())
		a += A[i] - '0';
	REP(i, (int)B.size())
		b += B[i] - '0';
	cout << ((a < b) ? b : a) << '\n';
    return 0;
}
