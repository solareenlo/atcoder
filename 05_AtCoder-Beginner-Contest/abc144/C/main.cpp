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

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n; cin >> n;

    if (isPrime(n)) cout << n - 1 << '\n';
    else {
        ll mini = 1LL << 60;
        ll num = 0;
        for (ll i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                if (i + n / i < mini) {
                    mini = min(mini, i + n / i);
                    num = i;
                }
            }
        }
        cout << num + n / num - 2 << '\n';
    }
    return 0;
}
