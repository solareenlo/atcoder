#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m, x;
    cin >> n >> m >> x;
    int count = 0;
    REP(i, m) {
        int tmp;
        cin >> tmp;
        if (tmp < x) count++;
    }
    cout << min(count, m - count) << '\n';
    return 0;
}
