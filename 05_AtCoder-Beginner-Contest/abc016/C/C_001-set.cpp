#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);

	int n, m;
	cin >> n >> m;
	vector<vector<int> > f(n);

	REP(i, m) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		f[a].push_back(b);
		f[b].push_back(a);
	}

	REP(i, n) {
		set<int> ff;
		REP(j, (int)f[i].size()) {
			int frend = f[i][j];
			REP(k, (int)f[frend].size()) {
				if (f[frend][k] != i)
					ff.insert(f[frend][k]);
			}
		}
		REP(j, (int)f[i].size())
			ff.erase(f[i][j]);
		cout << (int)ff.size() << '\n';
	}
    return 0;
}
