#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);

	int N;
	cin >> N;
	map<int, int> a;
	REP(i, N) {
		int tmp;
		cin >> tmp;
		a[tmp]++;
	}
	vector<int> diff((int)a.size());
	int i = 0;
	for (auto x : a) {
		diff[i] = x.second - 1;
		i++;
	}

	int n = diff.size();
	REP(i, n) {
		if (!diff[i]) continue ;
		int sum = 0;
		for (int j = i + 1; j < n; j++) {
			sum += diff[j];
			if (diff[i] <= sum) {
				for (int k = i + 1; k < j; k++) diff[k] = 0;
				diff[j] = sum - diff[i];
				diff[i] = 0;
				sum = 0;
				break ;
			}
		}
	}

	int res = 0;
	REP(i, n) res += diff[i];
	cout << n - (res % 2) << '\n';
    return 0;
}
