#include <bits/stdc++.h>
using namespace std;

double dp[101][101][101];
double f(int a, int b, int c) {
	if (dp[a][b][c]) return dp[a][b][c];
	if (a == 100 || b == 100 || c == 100) return 0;
	double res = 0;
	res += (f(a+1,b,c)+1) * a / (a+b+c);
	res += (f(a,b+1,c)+1) * b / (a+b+c);
	res += (f(a,b,c+1)+1) * c / (a+b+c);
	dp[a][b][c] = res;
	return res;
}

int main() {
	int a, b, c; cin >> a >> b >> c;
	printf("%.9f\n", f(a, b, c));
    return 0;
}
