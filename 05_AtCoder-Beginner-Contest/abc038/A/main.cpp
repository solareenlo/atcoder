#include <iostream>
using namespace std;

const string YES = "YES";
const string NO = "NO";

void solve(std::string S){
    if (S[S.size() - 1] == 'T') cout << YES << '\n';
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
