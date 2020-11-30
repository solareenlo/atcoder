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


void solve(std::vector<std::vector<long long>> b, std::vector<std::vector<long long>> c){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::vector<std::vector<long long>> b(2, std::vector<long long>(3));
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            scanf("%lld",&b[i][j]);
        }
    }
    std::vector<std::vector<long long>> c(3, std::vector<long long>(2));
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            scanf("%lld",&c[i][j]);
        }
    }
    solve(std::move(b), std::move(c));
    return 0;
}
