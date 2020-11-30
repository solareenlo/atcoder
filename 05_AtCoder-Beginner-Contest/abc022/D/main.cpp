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


void solve(long long N, std::vector<long long> Ax, std::vector<long long> Ay, std::vector<long long> Bx, std::vector<long long> By){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> Ax(N);
    std::vector<long long> Ay(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&Ax[i]);
        scanf("%lld",&Ay[i]);
    }
    std::vector<long long> Bx(N);
    std::vector<long long> By(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&Bx[i]);
        scanf("%lld",&By[i]);
    }
    solve(N, std::move(Ax), std::move(Ay), std::move(Bx), std::move(By));
    return 0;
}
