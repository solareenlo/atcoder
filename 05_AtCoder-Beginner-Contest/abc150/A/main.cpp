#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

const string YES = "Yes";
const string NO = "No";

void solve(long long K, long long X){
    if (500 * K >= X) print(YES);
    else print(NO);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long K;
    scanf("%lld",&K);
    long long X;
    scanf("%lld",&X);
    solve(K, X);
    return 0;
}
