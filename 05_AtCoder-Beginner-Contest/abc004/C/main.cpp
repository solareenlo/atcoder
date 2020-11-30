#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<int> box(6);
    REP(i, 6) box[i] = i + 1;

    int n;
    cin >> n;

    n %= 30;

    // 100: 435612

    REP(i, n) {
        int j = i % 5;
        int tmp = box[j];
        box[j] = box[j + 1];
        box[j + 1] = tmp;
    }
    // cout << setw(2) << i << ": ";
    for (int j : box) cout << j;
    cout << '\n';
    return 0;
}
