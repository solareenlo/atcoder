#include <iostream>
using namespace std;

void solve(long long N){
    if (N == 1) {
        double ans = 1.0;
        printf("%.6f\n", ans);
    } else if (N % 2) {
        double ans = (N/2 + 1) / double(N);
        printf("%.6f\n", ans);
    } else {
        double ans = 0.5;
        printf("%.6f\n", ans);
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    solve(N);
    return 0;
}
