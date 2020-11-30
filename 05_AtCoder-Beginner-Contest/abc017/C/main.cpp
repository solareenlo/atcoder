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


void solve(long long N, long long M, std::vector<long long> l, std::vector<long long> r, std::vector<long long> s){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> l(N);
    std::vector<long long> r(N);
    std::vector<long long> s(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&l[i]);
        scanf("%lld",&r[i]);
        scanf("%lld",&s[i]);
    }
    solve(N, M, std::move(l), std::move(r), std::move(s));
    return 0;
}
