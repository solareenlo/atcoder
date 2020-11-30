#include <algorithm>
#include <iostream>
#include <climits>
#include <cmath>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    vector<int> x(n);
    REP(i, n) cin >> x[i];
    sort(x.begin(), x.end());

    long long mini = LLONG_MAX;
    for (int i = x[0]; i <= x[n - 1]; i++) {
        long long sum = 0;
        REP(j, n) sum += pow(x[j] - i, 2);
        mini = min(mini, sum);
    }

    cout << mini << '\n';
    return 0;
}
