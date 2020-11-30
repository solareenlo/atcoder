#include <algorithm>
#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

const int INF = 2002002002;

void solve(long long N, std::string S){
    int count = 0;
    for (int i = 0; i < S.size() - 2; i++) {
        if (S.substr(i, 3) == "ABC") count++;
    }
    print(count);
}

int main(){
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::string S;
    std::cin >> S;
    solve(N, S);
    return 0;
}
