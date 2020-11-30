#include <iostream>
using namespace std;

void solve(std::string S, std::string T, long long A, long long B, std::string U){
    if (U == S) cout << A - 1 << ' ' << B << '\n';
    else if (U == T) cout << A << ' ' << B - 1 << '\n';
}

int main(){
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    std::string S;
    std::cin >> S;
    std::string T;
    std::cin >> T;
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    std::string U;
    std::cin >> U;
    solve(S, T, A, B, U);
    return 0;
}
