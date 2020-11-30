#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(long long A, long long B, long long C, long long K, long long S, long long T){
    if (S + T >= K) print((A - C) * S + (B - C) * T);
    else print(A * S + B * T);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    long long C;
    scanf("%lld",&C);
    long long K;
    scanf("%lld",&K);
    long long S;
    scanf("%lld",&S);
    long long T;
    scanf("%lld",&T);
    solve(A, B, C, K, S, T);
    return 0;
}
