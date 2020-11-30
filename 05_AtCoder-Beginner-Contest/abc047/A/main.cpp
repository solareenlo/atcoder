#include <algorithm>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

// 入出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

const string YES = "Yes";
const string NO = "No";

void solve(long long a, long long b, long long c){
    vector<long long> n;
    n.push_back(a);
    n.push_back(b);
    n.push_back(c);
    sort(n.begin(), n.end());
    if (n[0] + n[1] == n[2]) print(YES);
    else print(NO);
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
