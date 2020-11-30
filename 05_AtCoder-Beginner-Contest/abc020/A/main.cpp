#include <iostream>
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(long long Q){
    if (Q == 1) print("ABC");
    if (Q == 2) print("chokudai");
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long Q;
    scanf("%lld",&Q);
    solve(Q);
    return 0;
}
