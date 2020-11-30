#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<vector<int> > sub(n);
    REP(i, n - 1) {
        int tmp;
        cin >> tmp;
        sub[tmp - 1].push_back(i + 1);
    }

    vector<int> p(n), maxP(n), minP(n);

    for (int i = n - 1; i >= 0; i--) {
        if (sub[i].size() == 0) {
            p[i] = 1;
            continue ;
        }
        maxP[i] = 0;
        minP[i] = (int)1e9;
        for(int j : sub[i]) {
            maxP[i] = max(maxP[i], p[j]);
            minP[i] = min(minP[i], p[j]);
        }
        p[i] = maxP[i] + minP[i] + 1;
    }

    cout << p[0] << '\n';
    return 0;
}
