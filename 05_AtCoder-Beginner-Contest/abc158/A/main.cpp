#include <iostream>
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(std::string S){
    if (S[0] == S[1] && S[1] == S[2]) cout << NO << '\n';
    else cout << YES << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
