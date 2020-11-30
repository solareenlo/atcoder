#include <iostream>
using namespace std;

void solve(std::string S){
    string t = "2019/04/30";
    if (S <= t) cout << "Heisei" << '\n';
    else cout << "TBD" << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
