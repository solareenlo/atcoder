#include <algorithm>
#include <iostream>
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

const string YES = "YES";
const string NO = "NO";

void solve(std::string A, std::string B, std::string C){
    bool ans1 = false;
    bool ans2 = false;
    if (A[A.length() - 1] == B[0]) ans1 = true;
    if (B[B.length() - 1] == C[0]) ans2 = true;
    if (ans1 && ans2) print(YES);
    else print(NO);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string A;
    std::cin >> A;
    std::string B;
    std::cin >> B;
    std::string C;
    std::cin >> C;
    solve(A, B, C);
    return 0;
}
