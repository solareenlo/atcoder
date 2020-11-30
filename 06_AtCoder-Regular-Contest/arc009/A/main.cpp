#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    int sum = 0;
    REP(i, n) {
        int a, b;
        cin >> a >> b;
        sum += a * b;
    }

    cout << floor(double(sum) * 1.05) << '\n';
    return 0;
}
