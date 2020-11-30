#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(long long N, std::vector<long double> x, std::vector<std::string> u){
    long double ans = 0.0;
    REP(i, N) {
        if (u[i] == "JPY") ans += x[i];
        else ans += x[i] * 380000.0;
    }
    printf("%.5Lf\n", ans);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    cin >> N;
    std::vector<long double> x(N);
    std::vector<std::string> u(N);
    for(int i = 0 ; i < N ; i++){
        cin >> x[i];
        std::cin >> u[i];
    }
    solve(N, std::move(x), std::move(u));
    return 0;
}
