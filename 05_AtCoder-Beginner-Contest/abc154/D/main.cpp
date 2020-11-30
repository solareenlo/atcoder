#include <iostream>
#include <queue>
#include <queue>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    vector<int> p(n);
    REP(i, n) cin >> p[i];

    vector<double> ex(n);
    REP(i, n) ex[i] = (1.0 + p[i]) / 2.0;

    queue<double> q;
    double maxi = 0.0;
    double sum = 0.0;
    REP(i, n) {
        sum += ex[i];
        q.push(ex[i]);
        if (q.size() > k) {
            sum -= q.front();
            q.pop();
        }
        if (q.size() == k)
            maxi = max(maxi, sum);
    }

    printf("%.10f\n", maxi);
    return 0;
}
