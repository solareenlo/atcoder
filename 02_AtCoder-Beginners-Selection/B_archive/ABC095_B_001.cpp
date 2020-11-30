#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, x;
    cin >> n >> x;

    int min = INF;
    REP(i, n) {
        int tmp;
        cin >> tmp;
        if (tmp < min)
            min = tmp;
        x -= tmp;
    }

    cout << n + x / min << '\n';
    return 0;
}
