#include <iostream>
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

const string YES = "YES";
const string NO = "NO";

void solve(long long M, long long D){
    if (M % D) print(NO);
    else print(YES);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long M;
    scanf("%lld",&M);
    long long D;
    scanf("%lld",&D);
    solve(M, D);
    return 0;
}
