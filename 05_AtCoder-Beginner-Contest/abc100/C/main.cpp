#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

template<class T, class U> inline int divCount(T &num, U divisor) {
    int count = 0;
    while (num % divisor == 0) {
        num /= divisor;
        count++;
    }
    return count;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<ll> a(n);
    REP(i, n) cin >> a[i];

    int count = 0;
    REP(i, n) if (a[i] % 2) count++;
    if (count == n) cout << '0' << '\n';
    else {
        ll countEven = 0;
        REP(i, n) {
            if (a[i] % 2 == 0) {
                countEven += divCount(a[i], 2);
            }
        }
        cout << countEven << '\n';
    }
    return 0;
}
