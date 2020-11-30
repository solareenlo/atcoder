#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(long long N, std::vector<long long> a){
    int count = 1;
    int tmp = a[1];
    bool ans = false;
    REP(i, N) {
        if (tmp == 2) {
            ans = true;
            break ;
        }
        if (tmp == 1) break ;
        tmp = a[tmp];
        count++;
    }
    if (ans) print(count);
    else print(-1);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> a(N + 1);
    for(int i = 1 ; i <= N ; i++){
        scanf("%lld",&a[i]);
    }
    solve(N, std::move(a));
    return 0;
}
