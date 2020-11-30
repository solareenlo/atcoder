#include <iostream>
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(long long X, long long Y){
    if (X > Y) print(X);
    else print(Y);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long X;
    scanf("%lld",&X);
    long long Y;
    scanf("%lld",&Y);
    solve(X, Y);
    return 0;
}
