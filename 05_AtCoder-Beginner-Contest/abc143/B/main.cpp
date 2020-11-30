#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(long long N, std::vector<long long> d){
    int ans = 0;
    REP(i, N) {
        for (int j = i + 1; j < N; j++) {
            ans += d[i] * d[j];
        }
    }
    print(ans);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> d(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&d[i]);
    }
    solve(N, std::move(d));
    return 0;
}
