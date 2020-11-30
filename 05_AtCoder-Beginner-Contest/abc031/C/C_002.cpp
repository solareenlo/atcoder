#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
	cin.tie(0)->sync_with_stdio(false);

	int n;
	cin >> n;
	vector<int> a(n);
	REP(i, n) cin >> a[i];

	int ans = -1e9;
	// 最初に高橋君が数列の要素のうち 1 つに丸をつける
	REP(i, n) {
		int maxiA = -1e9;
		int maxiT = -1e9;
		// 次に青木君が数列の要素で高橋君が1 つに丸をつける
		REP(j, n) {
			// 丸を付けなかったもののうち
			if (i == j) continue;
			int l = min(i, j);
			int r = max(i, j);
			int sumT = 0;
			int sumA = 0;
			// 丸を付けた 2 つの要素に対して，
			// その 2 つの要素およびそれらの間にあるすべての要素を残して
			for (int k = l; k <= r; k++) {
				// 数列 a 内で左から偶数番目の要素の合計が青木君の得点
				if((k - l) % 2) sumA += a[k];
				// 奇数番目の要素の合計が高橋君の得点
				else sumT += a[k];
			}
			// 青木君の最大値を更新できたら
			if (sumA > maxiA) {
				maxiA = sumA;
				// 高橋君の最大値も更新する
				maxiT = sumT;
			}
		}
		ans = max(ans, maxiT);
	}

	cout << ans << '\n';
}
