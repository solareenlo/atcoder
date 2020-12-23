#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    vector<int> p(n);
    REP(i, n) cin >> p[i];

    long double maxi = 0;
    REP(i, n - k + 1) {
        long double sum = 0;
        for (int j = i; j < i + k; j++) {
            REP(a, p[j])
                sum += (a + 1) * (1.0 / p[j]);
        }
        maxi = max(maxi, sum);
    }

    printf("%.6Lf\n", maxi);
    return 0;
}
