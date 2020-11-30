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


void solve(long long R, long long C, long long K, long long N, std::vector<long long> r, std::vector<long long> c){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long R;
    scanf("%lld",&R);
    long long C;
    scanf("%lld",&C);
    long long K;
    scanf("%lld",&K);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> r(N);
    std::vector<long long> c(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&r[i]);
        scanf("%lld",&c[i]);
    }
    solve(R, C, K, N, std::move(r), std::move(c));
    return 0;
}
