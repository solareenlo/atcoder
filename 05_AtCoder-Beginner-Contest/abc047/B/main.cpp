#include <algorithm>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

// 便利関数
template <class T> inline bool chmin(T &a, T b) {if (a > b){a = b;return true;}return false;}
template <class T> inline bool chmax(T &a, T b) {if (a < b){a = b;return true;}return false;}

// 入出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(long long W, long long H, long long N, std::vector<long long> x, std::vector<long long> y, std::vector<long long> a){
    ll minX = 0, maxX = W, minY = 0, maxY = H;
    REP(i, N) {
        if (a[i] == 1) chmax(minX, x[i]);
        if (a[i] == 2) chmin(maxX, x[i]);
        if (a[i] == 3) chmax(minY, y[i]);
        if (a[i] == 4) chmin(maxY, y[i]);
    }
    if (minX >= maxX || minY >= maxY) print(0);
    else {
        ll ans = (maxX - minX) * (maxY - minY);
        print(ans);
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long W;
    scanf("%lld",&W);
    long long H;
    scanf("%lld",&H);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> x(N);
    std::vector<long long> y(N);
    std::vector<long long> a(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&x[i]);
        scanf("%lld",&y[i]);
        scanf("%lld",&a[i]);
    }
    solve(W, H, N, std::move(x), std::move(y), std::move(a));
    return 0;
}
