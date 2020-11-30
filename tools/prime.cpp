// エラトステネスの篩を使って指定した数以下の素数を全て取得する
// Reference: https://github.com/atcoder-live/library/blob/master/prime.cpp
// Sieve of Eratosthenes
// https://youtu.be/UTVg7wzMWQc?t=2774
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

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
    vector<int> factorList(int x) {
        vector<int> res;
        while (x != 1) {
            res.push_back(f[x]);
            x /= f[x];
        }
        return res;
    }
    vector<pair<int, int> > factor(int x) {
        vector<int> fl = factorList(x);
        if (fl.size() == 0) return {};
        vector<pair<int, int> > res(1, pair<int, int>(fl[0], 0));
        for (int p : fl) {
            if (res.back().first == p) res.back().second++;
            else res.emplace_back(p, 1);
        }
        return res;
    }
    vector<pair<long long, int> > factor(long long x) {
        vector<pair<long long,int>> res;
        for (int p : primes) {
            int y = 0;
            while (x % p == 0) {
                x /= p;
                ++y;
            }
            if (y != 0) res.emplace_back(p,y);
        }
        if (x != 1) res.emplace_back(x,1);
        return res;
    }
};
