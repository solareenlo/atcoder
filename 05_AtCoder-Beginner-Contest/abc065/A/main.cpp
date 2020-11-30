#include <iostream>
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(long long X, long long A, long long B){
    if (X + A - B >= 0) {
        if (A - B >= 0) print("delicious");
        else print("safe");
    } else
        print("dangerous");
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long X;
    scanf("%lld",&X);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    solve(X, A, B);
    return 0;
}
