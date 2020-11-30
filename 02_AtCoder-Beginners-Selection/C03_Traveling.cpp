#include <iostream>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

int x[100100], y[100100], t[100100];

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    REP(i, n)
        cin >> t[i + 1] >> x[i + 1] >> y[i + 1];

    bool can = true;
    REP(i, n) {
        int diff_t = t[i + 1] - t[i];
        int dist = abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);
        if (diff_t < dist)
            can = false;
        if (diff_t % 2 != dist % 2)
            can = false;
    }

    if (can)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
    return 0;
}
