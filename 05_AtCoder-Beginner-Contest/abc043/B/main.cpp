#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(std::string s){
    string ans;
    REP(i, s.size()) {
        if (s[i] == '0') ans.push_back('0');
        else if (s[i] == '1') ans.push_back('1');
        else if (s[i] == 'B') {
            if (ans.size() == 0) continue ;
            ans.pop_back();
        }
    }
    cout << ans << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string s;
    std::cin >> s;
    solve(s);
    return 0;
}
