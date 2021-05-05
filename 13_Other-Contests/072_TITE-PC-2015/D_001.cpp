#include <bits/stdc++.h>
using namespace std;

inline bool is_prime(int64_t n) {
	if (n<2)
		return false;
	for (int64_t i=2; i*i<=n; i++)
		if (n%i==0)
			return false;
	return true;
}

int main() {
	string s; cin >> s;
	int odd[]={1,3,5,7,9};
	map<char, int> m;
	int64_t tmp=0;
	for (char c : s) if (m.count(c) == 0)
		m[c]=tmp++;
	for (auto x : m)
		cout << x.first << " " << x.second << '\n';
	int64_t res=-1;
	if ((int)m.size() <= 5) {
		do {
			tmp=0;
			for (auto c : s) {
				tmp*=10;
				tmp+=odd[m[c]];
			}
			if (is_prime(tmp))
				res=tmp;
		} while (next_permutation(odd, odd+5));
	}
	cout << res << '\n';
	return 0;
}
