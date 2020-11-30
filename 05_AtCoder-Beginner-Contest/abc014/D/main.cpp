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


void solve(long long N, std::vector<long long> x, std::vector<long long> y, long long Q, std::vector<long long> a, std::vector<long long> b){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> x(N-1);
    std::vector<long long> y(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        scanf("%lld",&x[i]);
        scanf("%lld",&y[i]);
    }
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> a(Q);
    std::vector<long long> b(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&a[i]);
        scanf("%lld",&b[i]);
    }
    solve(N, std::move(x), std::move(y), Q, std::move(a), std::move(b));
    return 0;
}
