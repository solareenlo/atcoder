#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long h;
    cin >> h;

    int count = 0;
    while (h) {
        h /= 2;
        count++;
    }

    long long ans = 1;
    REP(i, count - 1)
        ans = ans * 2 + 1;

    cout << ans << '\n';
    return 0;
}
