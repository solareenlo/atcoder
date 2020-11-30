#include <iostream>
using namespace std;

void solve(std::string W){
    cout << W + "s" << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string W;
    std::cin >> W;
    solve(W);
    return 0;
}
