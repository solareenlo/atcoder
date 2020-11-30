#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(long long n, long long X, std::vector<long long> a){
    int ans = 0;
    REP(i, n) {
        if (X & (1 << i))
            ans += a[i];
    }
    print(ans);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long n;
    scanf("%lld",&n);
    long long X;
    scanf("%lld",&X);
    std::vector<long long> a(n-1-0+1);
    for(int i = 0 ; i < n-1-0+1 ; i++){
        scanf("%lld",&a[i]);
    }
    solve(n, X, std::move(a));
    return 0;
}
