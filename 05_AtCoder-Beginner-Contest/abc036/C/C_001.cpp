#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(false);

	int n;
	cin >> n;
	vector<int> a(n);
	set<int> A;
	REP(i, n) {
		int tmp;
		cin >> tmp;
		a[i] = tmp;
		A.insert(tmp);
	}
	map<int, int> m;
	int i = 0;
	for (auto x : A)
		m[x] = i++;
	REP(i, n)
		cout << m[a[i]] << '\n';
    return 0;
}
