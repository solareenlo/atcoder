#include <iostream>
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(std::string S){
    if (S[2] == S[3] && S[4] == S[5]) cout << YES << '\n';
    else cout << NO << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
