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

void solve(std::string C){
    // string alpha = "abcdefghijklmnopqrstuvwxyz";
    // print(alpha[C[0] - 'a' + 1]);
    printf("%c\n", C[0] + 1);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string C;
    std::cin >> C;
    solve(C);
    return 0;
}
