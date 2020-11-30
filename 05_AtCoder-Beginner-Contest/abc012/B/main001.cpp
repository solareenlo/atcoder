#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}


void solve(long long N){
    long long h, m, s;
    h = N / 3600;
    m = (N % 3600) / 60;
    s = N % 60;
    if (h < 10) cout << '0' << h;
    else cout << h;
    cout << ':';
    if (m < 10) cout << '0' << m;
    else cout << m;
    cout << ':';
    if (s < 10) cout << '0' << s;
    else cout << s;
    cout << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    solve(N);
    return 0;
}
