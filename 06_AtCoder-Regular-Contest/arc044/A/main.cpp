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

    bool prime = false;
    if (n == 1) prime = false;
    else if (isPrime(n)) prime = true;
    else {
        string s = to_string(n);
        int sum = 0;
        REP(i, s.size()) sum += s[i] - '0';
        if (n % 2) if (n % 5) if (sum % 3)
            prime = true;
    }

    if (prime) cout << "Prime" << '\n';
    else cout << "Not Prime" << '\n';
    return 0;
}
