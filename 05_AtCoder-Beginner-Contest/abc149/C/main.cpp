#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    else if (n == 2) return true;
    else if (n % 2 == 0) return false;

    double sqrtN = sqrt(n);
    for (int i = 3; i <= sqrtN; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int x; cin >> x;

    bool ok = false;
    int ans = 0;
    while (!ok) {
        ok = isPrime(x);
        if (ok) ans = x;
        x++;
    }

    cout << ans << '\n';
    return 0;
}
