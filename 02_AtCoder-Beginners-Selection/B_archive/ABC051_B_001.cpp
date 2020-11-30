#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int k, s;
    cin >> k >> s;

    int count = 0;
    REP(a, k + 1) REP(b, k + 1) {
        if (s - a - b >= 0 && s - a - b <= k)
            count++;
    }

    cout << count << '\n';
    return 0;
}
