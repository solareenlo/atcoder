#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int a[n];
    REP(i, n)
        cin >> a[i];

    int ans = INF;
    REP(i, n) {
        int count = 0;
        while (a[i] % 2 == 0) {
            a[i] /= 2;
            count++;
        }
        if (count < ans)
            ans = count;
    }

    cout << ans << '\n';
    return 0;
}
