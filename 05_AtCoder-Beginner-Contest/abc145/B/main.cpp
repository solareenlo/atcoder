#include <iostream>
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long N, std::string S){
    if (N % 2) cout << NO << '\n';
    else {
        string s1 = S.substr(0, N/2);
        string s2 = S.substr(N/2);
        if (s1 == s2) cout << YES << '\n';
        else cout << NO << '\n';
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    cin >> N;
    std::string S;
    std::cin >> S;
    solve(N, S);
    return 0;
}
