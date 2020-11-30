#include <iostream>
using namespace std;

void solve(std::string S){
    if (S == "ABC") cout << "ARC" << '\n';
    else cout << "ABC" << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
