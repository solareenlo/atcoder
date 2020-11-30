#include <bits/stdc++.h>
using namespace std;
const string d[17] = {"N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW", "N"};
const double w[13] = {0.25, 1.55, 3.35, 5.45, 7.95, 10.75, 13.85, 17.15, 20.75, 24.45, 28.45, 32.65, 12000};

int main() {
	int deg, dis; cin >> deg >> dis;
	int i, j;
	for (i = 0; i < 17; i++)
		if (deg*10 < 1125+2250*i) break ;
	for (j = 0; j < 13; j++)
		if (dis < w[j] * 60) break ;
	cout << ((j) ? d[i] : "C") << " " << j << '\n';
	return 0;
}
