#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    int a = 100 * (n / 10);

    int b;
    if (n % 10 >= 7) b = 100;
    else b = 15 * (n % 10);

    cout << a + b << '\n';
    return 0;
}
