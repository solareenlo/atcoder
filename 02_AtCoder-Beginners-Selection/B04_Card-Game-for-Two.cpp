#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> a(n, 0);
    REP(i, n) cin >> a[i];

    sort(a.begin(), a.end(), greater<int>());

    int alice = 0;
    int bob = 0;
    REP(i, n) {
        if(i % 2) {
            bob += a[i];
        } else {
            alice += a[i];
        }
    }

    cout << alice - bob << '\n';
    return 0;
}
