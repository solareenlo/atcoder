#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> a(n);
    REP(i, n) cin >> a[i];

    int sum = accumulate(a.begin(), a.end(), 0);
    int num = a.size();

    int ave = sum / num;
    int dist = 0;
    REP(i, n) dist += pow(ave - a[i], 2);

    int ave2 = sum / num + 1;
    int dist2 = 0;
    REP(i, n) dist2 += pow(ave2 - a[i], 2);

    cout << min(dist, dist2) << '\n';
    return 0;
}
