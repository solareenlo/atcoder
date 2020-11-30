#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
    int n;
    cin >> n;

    int tmp = n;
    int digit = 0;
    while (tmp != 0) {
        tmp /= 10;
        digit++;
    }

    if (digit == 1) cout << n << '\n';
    if (digit == 2) cout << 9 << '\n';
    if (digit == 3) cout << 9 + n - 99 << '\n';
    if (digit == 4) cout << 9 + 900 << '\n';
    if (digit == 5) cout << 9 + 900 + n - 9999 << '\n';
    if (digit == 6) cout << 9 + 900 + 90000 << '\n';
    return 0;
}
