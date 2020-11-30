#include <iostream>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, y;
    cin >> n >> y;
    y /= 1000;

    int a = -1;
    int b = -1;
    int c = -1;
    REP(i, n + 1) REP(j, n - i + 1) {
        if (i * 10 + j * 5 + n - i - j == y) {
            a = i;
            b = j;
            c = n - i - j;
            break ;
        }
    }

    cout << a << ' ' << b << ' ' << c << '\n';
    return 0;
}
