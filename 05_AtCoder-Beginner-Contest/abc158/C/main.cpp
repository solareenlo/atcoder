#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    int ans = -100;
    for (int i = 10 * b; i < 10 * (b + 1); i++) {
        if (floor(i * 0.08) == a) {
            ans = i;
            break ;
        }
    }

    if (ans == -100) cout << -1 << '\n';
    else cout << ans << '\n';
    return 0;
}
