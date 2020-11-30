#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    map<int, int> a;

    REP(i, n) {
        int tmp;
        cin >> tmp;
        a[tmp]++;
        a[tmp - 1]++;
        a[tmp + 1]++;
    }

    int maxi = 0;
    for(auto i : a)
        maxi = max(maxi, i.second);

    cout << maxi << '\n';
    return 0;
}
