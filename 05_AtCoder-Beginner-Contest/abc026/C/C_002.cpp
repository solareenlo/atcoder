#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int> > sub(n);
    REP(i, n - 1) {
        int tmp;
        cin >> tmp;
        sub[tmp - 1].push_back(i + 1);
    }

    vector<int> salary(n), maxS(n), minS(n);
    for (int i = n - 1; i >= 0; i--) {
        if (sub[i].size() == 0) {
            salary[i] = 1;
            continue ;
        }
        maxS[i] = 0;
        minS[i] = (int)1e9;
        for (int j : sub[i]) {
            maxS[i] = max(maxS[i], salary[j]);
            minS[i] = min(minS[i], salary[j]);
        }
        salary[i] = maxS[i] + minS[i] + 1;
    }

    cout << salary[0] << '\n';
    return 0;
}
