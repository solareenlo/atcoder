#include <iostream>
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(long long S, long long T){
    print(T- S + 1);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long S;
    scanf("%lld",&S);
    long long T;
    scanf("%lld",&T);
    solve(S, T);
    return 0;
}
