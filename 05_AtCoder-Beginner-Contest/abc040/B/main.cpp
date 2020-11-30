#include <iostream>
#include <cmath>
using namespace std;

template<class T> inline T chmin(T &a, T b) {
    if (a > b) {
        a = b;
        return a;
    }
    return a;
}

int main() {
    int n;
    cin >> n;

    int ans = 100100100;
    for (int i = 1; i * i <= n; i++) {
        int j = n / i;
        chmin(ans, abs(i - j) + n - i * j);
    }

    cout << ans << '\n';
    return 0;
}
