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

// 入出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(long long N, long long M, std::vector<long long> a, std::vector<long long> b){
    map<ll, ll> city;
    REP(i, N + 1)
        city.insert(make_pair(i, 0));
    REP(i, M) {
        city[a[i]]++;
        city[b[i]]++;
    }
    REP(i, N + 1) {
        if (i == 0) continue ;
        print(city.at(i));
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> a(M);
    std::vector<long long> b(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&a[i]);
        scanf("%lld",&b[i]);
    }
    solve(N, M, std::move(a), std::move(b));
    return 0;
}
