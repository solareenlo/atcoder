#include <iostream>
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

const string YES = "Yes";
const string NO = "No";

void solve(long long A, long long B, long long C){
    if (A == B && A != C) print(YES);
    else if (B == C && B != A) print(YES);
    else if (C == A && C != B) print(YES);
    else print(NO);
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
    solve(A, B, C);
    return 0;
}
