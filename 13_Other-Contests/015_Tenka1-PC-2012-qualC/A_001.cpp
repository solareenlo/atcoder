#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

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

    int n;
    cin >> n;

    int cnt = 0;
    REP(i, n)
        if (isPrime(i)) cnt++;

    cout << cnt << '\n';
    return 0;
}
