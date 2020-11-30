#include <bits/stdc++.h>
#include <atcoder/all>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using namespace atcoder;
using ll = long long;
const ll GETA = 300 * 3;
const ll MAX = GETA * 2;

int main() {
	int pos[3] = {-100, 0, 100};
	int num[3];
	cin >> num[0] >> num[1] >> num[2];
	mcf_graph<int, ll> g(MAX + 5);
	ll source = MAX + 0;
	ll target = MAX + 1;
	ll boxes[3] = {MAX + 2, MAX + 3, MAX + 4};
	REP(i, MAX) REP(j, 3)
		g.add_edge(boxes[j], i, 1, abs(pos[j] - (i - GETA)));
	REP(i, 3) g.add_edge(source, boxes[i], num[i], 0);
	REP(i, MAX) g.add_edge(i, target, 1, 0);
	auto res = g.flow(source, target, num[0] + num[1] + num[2]);
	cout << res.second << '\n';
    return 0;
}
