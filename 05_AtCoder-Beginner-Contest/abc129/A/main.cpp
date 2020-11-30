#include <algorithm>
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    vector<int> r(3);
    REP(i, 3) cin >> r[i];
    sort(r.begin(), r.end());
    cout << r[0] + r[1] << '\n';
    return 0;
}
