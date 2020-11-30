#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    int a[m];
    REP(i, m) a[i] = 0;

    REP(i, n) {
        int k;
        cin >> k;
        REP(j, k) {
            int tmp;
            cin >> tmp;
            a[tmp - 1]++;
        }
    }

    int count = 0;
    REP(i, m)
        if (a[i] == n) count++;

    cout << count << '\n';
    return 0;
}
