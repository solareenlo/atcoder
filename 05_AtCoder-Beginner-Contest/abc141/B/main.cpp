#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(std::string S){
    int count = 0;
    REP(i, S.size()) {
        if (i % 2) {
            if (S[i] == 'L' || S[i] == 'U' || S[i] == 'D') count++;
        } else {
            if (S[i] == 'R' || S[i] == 'U' || S[i] == 'D') count++;
        }
    }
    if (count == S.size()) cout << YES << '\n';
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
