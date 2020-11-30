#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int m, d;
    cin >> m >> d;

    int cnt = 0;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= d; j++) {
            int div = j / 10;
            int rem = j % 10;
            if (div >= 2 && rem >= 2 && div * rem == i)
                cnt++;
        }
    }

    cout << cnt << '\n';
    return 0;
}
