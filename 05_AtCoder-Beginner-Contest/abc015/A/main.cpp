#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(std::string A, std::string B){
    if (A.size() > B.size()) print(A);
    else print(B);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string A;
    std::cin >> A;
    std::string B;
    std::cin >> B;
    solve(A, B);
    return 0;
}
