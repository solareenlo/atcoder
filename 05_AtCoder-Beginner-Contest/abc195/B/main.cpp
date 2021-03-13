#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, w; cin >> a >> b >> w;
	w *= 1000;
	int mini = 1e9;
	int maxi = 0;
	for (int i=1; i<=w; i++) {
		if (a*i<=w && w<=b*i) {
			mini = min(mini, i);
			maxi = max(maxi, i);
		}
	}
	if (maxi) cout << mini << " " << maxi << '\n';
	else cout << "UNSATISFIABLE" << '\n';
    return 0;
}
