#include <iostream>
using namespace std;

void solve(std::string X){
    cout << X[0] - 'A' + 1 << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string X;
    std::cin >> X;
    solve(X);
    return 0;
}
