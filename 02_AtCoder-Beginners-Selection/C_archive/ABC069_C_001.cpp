#include <iostream>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n; cin >> n;
    int a[n];
    int count_4 = 0;
    int count_2 = 0;
    int count_odd = 0;
    REP(i, n) {
        cin >> a[i];
        if (!(a[i] % 4)) count_4++;
        else if (!(a[i] % 2)) count_2++;
        else count_odd++;
    }

    if (count_4 >= n / 2) cout << "Yes" << '\n';
    else if (count_4 >= count_odd) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}
