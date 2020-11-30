#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const double PI = acos(-1);

void solve(long long N, std::vector<long long> R){
    sort(R.begin(), R.end());
    double ans = 0.0;
    if (R.size() % 2) {
        REP(i, R.size()) {
            if (i % 2) ans -= R[i] * R[i] * PI;
            else ans += R[i] * R[i] * PI;
        }
    } else {
        REP(i, R.size()) {
            if (i % 2) ans += R[i] * R[i] * PI;
            else ans -= R[i] * R[i] * PI;
        }
    }
    printf("%.6f\n", ans);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> R(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&R[i]);
    }
    solve(N, std::move(R));
    return 0;
}
