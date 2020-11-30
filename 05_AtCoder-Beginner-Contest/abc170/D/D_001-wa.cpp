#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

template<class T> inline bool isPrime(T n) {
    if (n < 2) return false;
    else if (n == 2) return true;
    else if (n % 2 == 0) return false;

    long double sqrtN = sqrt(n);
    for (T i = 3; i <= sqrtN; i += 2)
        if (n % i == 0) return false;
    return true;
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll n; cin >> n;
    vector<ll> a(n);
    bool one = false;
    REP(i, n) {
        ll tmp; cin >> tmp;
        if (tmp == 1) one = true;
        a[i] = tmp;
    }
    sort(a.begin(), a.end());

    ll cnt = 0;
    if (one) {
        if (count(a.begin(), a.end(), 1) == 1) cnt = 1;
        else cnt = 0;
    } else {
        REP(i, n) {
            if (count(a.begin(), a.end(), a[i]) == 1) {
                if (isPrime(a[i])) cnt++;
                else {
                    auto itr = find_if(a.begin(), a.end(), [&](int x) {return x <= sqrt(a[i]);});
                    if (itr != a.end()) {
                        auto itr2 = find(a.begin(), a.end(), *itr);
                        int index = distance(a.begin(), itr2);
                        bool ok = true;
                        REP(j, index + 1) {
                            if (a[i] % a[j] == 0) {
                                ok = false;
                                break ;
                            }
                        }
                        if (ok) cnt++;
                    }
                }
            }
        }
    }

    cout << cnt << '\n';
    return 0;
}
