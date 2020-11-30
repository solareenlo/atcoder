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

const long long MOD = 1000000007;

void solve(long long N, long long a, long long b, long long M, std::vector<long long> x, std::vector<long long> y){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long a;
    scanf("%lld",&a);
    long long b;
    scanf("%lld",&b);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> x(M);
    std::vector<long long> y(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&x[i]);
        scanf("%lld",&y[i]);
    }
    solve(N, a, b, M, std::move(x), std::move(y));
    return 0;
}
