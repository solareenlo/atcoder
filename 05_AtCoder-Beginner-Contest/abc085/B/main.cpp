#include <iostream>
#include <numeric>
#include <set>
using namespace std;
using ll = long long;

// 入出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

int main(){
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::set<long long> d;
    for(int i = 0 ; i < N ; i++){
        ll tmp;
        cin >> tmp;
        d.insert(tmp);
    }
    // cout << d.size() << '\n';
    print(d.size());
    return 0;
}
