#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(std::string c){
    string vowel = "aiueo";
    bool ans = false;
    REP(i, vowel.size()) {
        if (c[0] == vowel[i]) {
            ans = true;
            break ;
        }
    }
    if (ans) cout << "vowel" << '\n';
    else cout << "consonant" << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string c;
    std::cin >> c;
    solve(c);
    return 0;
}
