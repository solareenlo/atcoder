#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    int cnt4 = 0;
    int cntO = 0;
    int cnt2 = 0;
    REP(i, n) {
        int tmp;
        cin >> tmp;
        if (tmp % 4 == 0) cnt4++;
        else if (tmp % 2 == 0) cnt2++;
        else cntO++;
    }

    if (cnt2 == 0 && cnt4 + 1 >= cntO) cout << "Yes" << '\n';
    else if (cnt2 > 0 && cnt4 >= cntO) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}
