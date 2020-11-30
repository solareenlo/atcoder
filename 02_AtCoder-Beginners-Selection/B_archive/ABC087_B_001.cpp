#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie();
    ios::sync_with_stdio(false);

    int a, b, c;
    cin >> a >> b >> c;
    int x;
    cin >> x;

    int count = 0;
    REP(i, a + 1) REP(j, b + 1) REP(k, c + 1) {
        if ((500 * i + 100 * j + 50 * k) == x)
            count++;
    }

    cout << count << '\n';
    return 0;
}
