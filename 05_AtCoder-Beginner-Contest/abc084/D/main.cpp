#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

struct Sieve {
    int n;
    vector<int> f, primes;
    Sieve(int n = 1):n(n), f(n + 1) {
        f[0] = f[1] = -1;
        for (long long i = 2; i <= n; ++i) {
            if (f[i]) continue;
            primes.push_back(i);
            f[i] = i;
            for (long long j = i * i; j <= n; j += i)
                if (!f[j]) f[j] = i;
        }
    }
    bool isPrime(int x) { return f[x] == x;}
};

int main() {
    cin.tie(0)->sync_with_stdio(false);

	Sieve sieve(1e5 + 1);
	vector<int> prime(1e5 + 1, 0);
	for (int i = 3; i < 1e5; i += 2) {
		int j = (i + 1) / 2;
		if (sieve.isPrime(i) && sieve.isPrime(j))
			prime[i] = 1;
	}

	vector<int> s(1e5 + 2, 0);
	for (int i = 1; i <= 1e5; i++)
		s[i] = s[i - 1] + prime[i];

	int q; cin >> q;
	REP(i, q) {
		int l, r; cin >> l >> r;
		cout << s[r] - s[l - 1] << '\n';
	}
    return 0;
}
