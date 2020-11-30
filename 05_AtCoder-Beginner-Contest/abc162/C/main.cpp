#include <iostream>
#define REP(i, n) for (int i = 1; i <= (n); i++)
using namespace std;

template<class T> inline T gcd(T a, T b) {
    if (b == 0) return a;
    return  gcd(b, a % b);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int k;
    cin >> k;

    int sum = 0;
    REP(a, k) REP(b, k) REP(c, k) sum += gcd(a, gcd(b, c));

    cout << sum << '\n';
    return 0;
}
