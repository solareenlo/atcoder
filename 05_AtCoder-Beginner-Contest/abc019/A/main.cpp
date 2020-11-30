#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}


void solve(long long a, long long b, long long c){
    vector<long long> age;
    age.push_back(a);
    age.push_back(b);
    age.push_back(c);
    sort(age.begin(), age.end());
    print(age[1]);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long a;
    scanf("%lld",&a);
    long long b;
    scanf("%lld",&b);
    long long c;
    scanf("%lld",&c);
    solve(a, b, c);
    return 0;
}
