#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);

	int n;
	cin >> n;
	map<int, bool> a;
	REP(i, n) {
		int tmp;
		cin >> tmp;
		a[tmp] = true;
	}

	int maxi = a.rbegin()->first;
	for (auto x : a) {
		if (x.second) {
			int i = 1;
			while (x.first * pow(2, i) <= maxi) {
				if (a.count(x.first * pow(2, i)))
					a[x.first * pow(2, i)] = false;
				i++;
			}
		}
	}
	int cnt = 0;
	for (auto x : a)
		if (x.second)
			cnt++;
	cout << cnt << '\n';
    return 0;
}
