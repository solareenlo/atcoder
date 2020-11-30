#include <bits/stdc++.h>
using namespace std;
const int o = 1125;
const int u = 2250;

string ft_news(int deg) {
	if (deg < o) return "N";
	else if (deg < o+u) return "NNE";
	else if (deg < o+2*u) return "NE";
	else if (deg < o+3*u) return "ENE";
	else if (deg < o+4*u) return "E";
	else if (deg < o+5*u) return "ESE";
	else if (deg < o+6*u) return "SE";
	else if (deg < o+7*u) return "SSE";
	else if (deg < o+8*u) return "S";
	else if (deg < o+9*u) return "SSW";
	else if (deg < o+10*u) return "SW";
	else if (deg < o+11*u) return "WSW";
	else if (deg < o+12*u) return "W";
	else if (deg < o+13*u) return "WNW";
	else if (deg < o+14*u) return "NW";
	else if (deg < o+15*u) return "NNW";
	else return "N";
}

int ft_dis(int dis) {
	double tmp = dis / 60.0;
	if (tmp < 0.25) return 0;
	else if (tmp < 1.55) return 1;
	else if (tmp < 3.35) return 2;
	else if (tmp < 5.45) return 3;
	else if (tmp < 7.95) return 4;
	else if (tmp < 10.75) return 5;
	else if (tmp < 13.85) return 6;
	else if (tmp < 17.15) return 7;
	else if (tmp < 20.75) return 8;
	else if (tmp < 24.45) return 9;
	else if (tmp < 28.45) return 10;
	else if (tmp < 32.65) return 11;
	else return 12;
}

int main() {
	int deg, dis; cin >> deg >> dis;
	string dir = ft_news(deg*10);
	int w = ft_dis(dis);
	if (w == 0) dir = "C";
	cout << dir << " " << w << '\n';
	return 0;
}
