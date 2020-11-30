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

void solve(std::vector<std::vector<long long>> x){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::vector<std::vector<long long>> x(5, std::vector<long long>(5));
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            scanf("%lld",&x[i][j]);
        }
    }
    solve(std::move(x));
    return 0;
}
