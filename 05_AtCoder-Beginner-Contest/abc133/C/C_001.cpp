#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int l, r;
    cin >> l >> r;

    int modL = l % 2019;
    int divL = l / 2019;
    int modR = r % 2019;
    int divR = r / 2019;

    if (divL == divR) {
        int mini = 2019;
        for (int i = modL; i < modR; i++) {
            for (int j = modL + 1; j <= modR; j++) {
                int tmp = (i * j) % 2019;
                mini = min(mini, tmp);
            }
        }
        cout << mini << '\n';
    }
    else cout << 0 << '\n';
    return 0;
}
