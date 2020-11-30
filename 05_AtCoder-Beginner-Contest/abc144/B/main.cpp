#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

const string YES = "Yes";
const string NO = "No";

void solve(long long N){
    bool ans = false;
    for (int i = 1; i < 10; i++)
        for (int j = 1; j < 10; j++)
            if (i * j == N) ans =true;
    if (ans) print(YES);
    else print(NO);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    solve(N);
    return 0;
}
