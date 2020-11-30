#include <iostream>
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

void solve(std::string A){
    if (A == "a") print(-1);
    else print("a");
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string A;
    std::cin >> A;
    solve(A);
    return 0;
}
