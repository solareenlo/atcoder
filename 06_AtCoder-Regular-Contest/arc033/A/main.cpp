#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    int sum = 0;
    REP(i, n + 1) sum += i;

    cout << sum << '\n';
    return 0;
}
