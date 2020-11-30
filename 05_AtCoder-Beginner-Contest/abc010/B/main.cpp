#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(long long n, std::vector<long long> a){
    int ans = 0;
    REP(i, n) {
        int mod6 = a[i] % 6;
        if (mod6 == 1 || mod6 == 3) continue ;
        if (mod6 == 2 || mod6 == 4) ans++;
        if (mod6 == 5) ans += 2;
        if (mod6 == 0) ans += 3;
    }
    print(ans);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long n;
    scanf("%lld",&n);
    std::vector<long long> a(n);
    for(int i = 0 ; i < n ; i++){
        scanf("%lld",&a[i]);
    }
    solve(n, std::move(a));
    return 0;
}
