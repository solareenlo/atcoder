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


void solve(long long N, std::vector<long long> H, std::vector<long long> S){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> H(N);
    std::vector<long long> S(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&H[i]);
        scanf("%lld",&S[i]);
    }
    solve(N, std::move(H), std::move(S));
    return 0;
}
