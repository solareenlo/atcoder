#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(std::string s){
    REP(i, s.size()) {
        if (s[i] == ',') cout << ' ';
        else cout << s[i];
    }
    cout << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string s;
    std::cin >> s;
    solve(s);
    return 0;
}
