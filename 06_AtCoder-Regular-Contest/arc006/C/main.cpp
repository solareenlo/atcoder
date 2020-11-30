#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;

	vector<int> box;
	int w; cin >> w;
	box.push_back(w);

	REP(i, n - 1) {
		cin >> w;
		sort(box.begin(), box.end());
		auto result = find(box.begin(), box.end(), w);
		if (result != box.end()) continue ;
		auto itr = lower_bound(box.begin(), box.end(), w);
		if (itr == box.end())
			box.push_back(w);
		else
			box[distance(box.begin(), itr)] = w;
	}

	cout << box.size() << '\n';
    return 0;
}
