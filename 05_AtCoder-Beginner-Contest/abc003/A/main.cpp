#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

const int INF = 2002002002;

void solve(long long N){
    long long num = 0;
    REP(i, N + 1) {
        if (i == 0) continue ;
        num += i;
    }
    double ans = (1.0 / (double)N) * (double)num * 10000.0;
    print(ans);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    solve(N);
    return 0;
}
