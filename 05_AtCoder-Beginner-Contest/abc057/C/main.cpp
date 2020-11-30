#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

template<class T>
inline set<T> divisorsList(T n) {
    set<T> div;
    for (T i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            div.insert(i);
            if (i * i != n)
                div.insert(n / i);
        }
    }
    return div;
}

template<class T>
inline T cntDigit(T num) {
	T cnt = 0;
	while (num) {
		num /= 10;
		cnt++;
	}
	return cnt;
}

int main(){
    cin.tie(0)->sync_with_stdio(false);

	ll N;
	cin >> N;

	ll res = 0;
	set<ll> d = divisorsList(N);
	ll n = d.size();
	auto itr = d.begin();
	REP(i, n / 2) itr++;
	res = cntDigit(*itr);

	cout << res << '\n';
    return 0;
}
