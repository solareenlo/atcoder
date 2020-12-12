#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
double sum[20002];
int main() {
	int n, q; cin >> n >> q;
	while (n--) {
		int x, r, h; cin >> x >> r >> h;
		double vol = r*r*M_PI*h/3.0;
		REP(i, h) {
			double rate = (pow(h-i,3)-pow(h-1-i,3))/pow(h,3);
			sum[x+i+1] += vol*rate;
		}
	}
	REP(i, 20001)
		sum[i+1] += sum[i];
	while (q--) {
		int a, b; cin >> a >> b;
		printf("%.10f\n", sum[b]-sum[a]);
	}
    return 0;
}
