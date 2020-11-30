#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

const int dx[4] = {0, 1, 0,-1};
const int dy[4] = {-1,0, 1, 0};

int main(){
    cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	int N = 101;
	vector<vector<int> > p(N, vector<int>(N, 0));
	REP(i, n) {
		int x, y; cin >> x >> y;
		cin >> p[y][x];
	}

	// REP(i, N) {
	// 	REP(j, N) {
	// 		cout << setw(2) << p[i][j];
	// 	}
	// 	cout << '\n';
	// }
	// 	cout << '\n';

	REP(i, N) REP(j, N) {
		map<int, int> t;
		REP(k, 4) {
			if (!p[i][j])
				if (i + dx[k] >= 0 && i + dx[k] < N)
					if (j + dy[k] >= 0 && j + dy[k] < N)
						t[p[j+dy[k]][i+dx[k]]]++;
		}
		if ((int)t.size() == 1) {
			auto itr = t.begin();
			if (itr->first > 0)
				p[i][j] = itr->first + 1;
		}
	}

	// REP(i, N) {
	// 	REP(j, N) {
	// 		cout << setw(2) << p[i][j];
	// 	}
	// 	cout << '\n';
	// }

	pair<int, int> res;
	int maxi = 0;
	REP(i, N) REP(j, N) {
		if (maxi < p[i][j]) {
			maxi = p[i][j];
			res.first = i;
			res.second = j;
		}
	}
	cout << res.first << " " << res.second << " " << maxi << '\n';
    return 0;
}
