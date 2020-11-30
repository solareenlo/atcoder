#include <iostream>
#include <vector>
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(std::vector<long long> H){
    print(H[0] - H[1]);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::vector<long long> H(2);
    for(int i = 0 ; i < 2 ; i++){
        scanf("%lld",&H[i]);
    }
    solve(std::move(H));
    return 0;
}
