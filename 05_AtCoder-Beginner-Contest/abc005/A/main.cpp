#include <iostream>
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

const int INF = 2002002002;

void solve(long long x, long long y){
    print(y / x);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long x;
    scanf("%lld",&x);
    long long y;
    scanf("%lld",&y);
    solve(x, y);
    return 0;
}
