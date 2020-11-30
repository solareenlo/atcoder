#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    map<int, int> rate;
    int cnt = 0;
    REP(i, n) {
        int tmp;
        cin >> tmp;
        if (tmp >= 1 && tmp <= 399) rate[0]++;
        if (tmp >= 400 && tmp <= 799) rate[1]++;
        if (tmp >= 800 && tmp <= 1199) rate[2]++;
        if (tmp >= 1200 && tmp <= 1599) rate[3]++;
        if (tmp >= 1600 && tmp <= 1999) rate[4]++;
        if (tmp >= 2000 && tmp <= 2399) rate[5]++;
        if (tmp >= 2400 && tmp <= 2799) rate[6]++;
        if (tmp >= 2800 && tmp <= 3199) rate[7]++;
        if (tmp >= 3200) cnt++;
    }
    if (rate.size() == 0)
        cout << 1 << ' ' << cnt << '\n';
    else
        cout << rate.size() << ' ' << rate.size() + cnt << '\n';
    return 0;
}
