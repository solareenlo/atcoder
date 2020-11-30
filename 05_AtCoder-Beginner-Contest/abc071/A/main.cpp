#include <algorithm>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

// 入出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(long long x, long long a, long long b){
    if (abs(x - a) < abs(x - b)) print('A');
    else print('B');
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long x;
    scanf("%lld",&x);
    long long a;
    scanf("%lld",&a);
    long long b;
    scanf("%lld",&b);
    solve(x, a, b);
    return 0;
}
