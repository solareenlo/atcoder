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


void solve(long long N, long long M, long long D, std::vector<long long> A){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    long long D;
    scanf("%lld",&D);
    std::vector<long long> A(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&A[i]);
    }
    solve(N, M, D, std::move(A));
    return 0;
}
