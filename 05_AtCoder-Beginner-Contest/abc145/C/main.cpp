#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n; cin >> n;
    vector<int> x(n), y(n);
    REP(i, n) cin >> x[i] >> y[i];

    vector<int> town;
    REP(i, n) town.push_back(i);

    int tmp = n;
    int sum = 1;
    while (tmp != 1) {
        sum *= tmp;
        tmp--;
    }

    double dist = 0.0;
    REP(i, sum) {
        REP(j, n - 1)
            dist += hypot(x[town[j]] - x[town[j + 1]], y[town[j]] - y[town[j + 1]]);
        next_permutation(town.begin(), town.end());
    }

    dist /= sum;

    printf("%.10f\n", dist);
    return 0;
}
