#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    map<int, int> a;
    REP(i, n) {
        int tmp;
        cin >> tmp;
        a[tmp]++;
    }

    vector<int> tmp(a.size());
    int index = 0;
    for (auto i : a) {
        tmp[index] = i.second;
        index++;
    }
    sort(tmp.begin(), tmp.end());

    int sum = 0;
    if (a.size() > k)
        REP(i, a.size() - k)
            sum += tmp[i];

    cout << sum << '\n';
    return 0;
}
