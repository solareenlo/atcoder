#include <iostream>
using namespace std;

void solve(std::string s){
    cout << s[0] << s.size() - 2 << s[s.size() - 1] << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string s;
    std::cin >> s;
    solve(s);
    return 0;
}
