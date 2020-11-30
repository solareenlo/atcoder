#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}


void solve(long long N, long long M, long long P, long long Q, long long R, std::vector<long long> x, std::vector<long long> y, std::vector<long long> z){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    long long P;
    scanf("%lld",&P);
    long long Q;
    scanf("%lld",&Q);
    long long R;
    scanf("%lld",&R);
    std::vector<long long> x(R);
    std::vector<long long> y(R);
    std::vector<long long> z(R);
    for(int i = 0 ; i < R ; i++){
        scanf("%lld",&x[i]);
        scanf("%lld",&y[i]);
        scanf("%lld",&z[i]);
    }
    solve(N, M, P, Q, R, std::move(x), std::move(y), std::move(z));
    return 0;
}
