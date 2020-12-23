#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	int p[n];
	REP(i, n) cin >> p[i];
	double ex[n];
	REP(i, n) ex[i] = (p[i]+1)/2.0;
	double maxi = 0, sum = 0;
	queue<double> q;
	REP(i, n) {
		sum += ex[i];
		q.push(ex[i]);
		if ((int)q.size() > k) {
			sum -= q.front();
			q.pop();
		}
		if ((int)q.size() == k)
			maxi = max(maxi, sum);
	}
	printf("%.10f\n", maxi);
	return 0;
}
