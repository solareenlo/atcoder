#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int sum = 0;
    int r = 10;
    REP(i, 5) {
        int tmp;
        cin >> tmp;
        sum += (tmp + 9) / 10;
        if (tmp % 10 && r > tmp % 10)
            r = tmp % 10;
    }

    cout << sum * 10 - 10 + r << '\n';
    return 0;
}
